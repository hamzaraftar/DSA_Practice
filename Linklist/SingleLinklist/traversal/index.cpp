#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *head, *temp;

int main()
{
    int choise;
    head = 0;
    while (choise)
    {
        node *newNode = new node;
        cout << "Enter data :" << endl;
        cin >> newNode->data;
        newNode->next = 0;
        if (head == 0)
        {
            head = temp = newNode;
        }
        else
        {
            temp->next = newNode;
            temp = newNode;
        }
        cout << "Do you want to continue press(1,0)" << endl;
        cin >> choise;
    }

    temp = head;
    cout << "The node in Linklist are :" << endl;
    while (temp != 0)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
    return 0;
}