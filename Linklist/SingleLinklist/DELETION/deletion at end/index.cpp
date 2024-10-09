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

void deleteAtEnd()
{
    temp = head;
    cout << "Delete  at end :" << endl;
    while (temp != 0)
    {
        temp = temp->next;
    }
    delete (temp);
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

int main()
{
    Create();
    Display();
    deleteAtEnd();
    Display();
    return 0;
}