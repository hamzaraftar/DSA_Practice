#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *head;
struct node *temp;

void Create()
{
    int choise = 1;
    head = 0;
    while (choise)
    {
        node *newNode = new node;
        cout << "Enter data" << endl;
        cin >> newNode->data;
        newNode->next = 0;
        if (head == 0)
        {
            temp = head = newNode;
        }
        else
        {
            temp->next = newNode;
            temp = newNode;
        }
        cout << "Do you want to continue press (1,2)" << endl;
        cin >> choise;
    }
}

void Display()
{
    cout << "The node in linklist are :" << endl;
    temp = head;
    while (temp != 0)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}
int main()
{
    Create();
    Display();
    return 0;
}