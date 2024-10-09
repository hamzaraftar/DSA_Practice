#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *temp, *head;

void Create()
{
    int choise = 1;
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
        cout << "Do you want to continue press (1,0)" << endl;
        cin >> choise;
    }
}

void Display()
{
    cout << "Nodes in linklist are : " << endl;
    temp = head;
    while (temp != 0)
    {
        cout << temp->data << " " << endl;
        temp = temp->next;
    }
}

void InsertAtSepPos()
{
    int pos, i = 1;
    temp = head;
    cout << "Enter position number : " << endl;
    cin >> pos;
    while (i < pos)
    {
        temp = temp->next;
        i++;
    }
    node *newNode = new node;
    cout << "Enter data you want to insert :" << endl;
    cin >> newNode->data;
    newNode->next = temp->next;
    temp->next = newNode;
}

int main()
{
    Create();
    Display();
    InsertAtSepPos();
    Display();
    return 0;
}