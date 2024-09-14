#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *head;

void CreateNode()
{
    int choise;
    head = 0;
    while (choise)
    {
        struct node *temp;
        node *newNode = new node;
        cout << "Enter data into Linklist : " << endl;
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
        cout << "Do you want to continue press (1,0)" << endl;
        cin >> choise;
    }
}
void DisplayLinklist()
{
    cout << "The elements of linklist are :" << endl;
    struct node *temp;
    temp = head;
    while (temp != 0)
    {
        cout << temp->data << "  " << endl;
        temp = temp->next;
    }
}

int main()
{
    CreateNode();
    DisplayLinklist();
    return 0;
}