#include <iostream>
using namespace std;
#include "Node.cpp"

class Queue
{
private:
    Node *front = 0;
    Node *rear = 0;

public:
    void enqueue(int x)
    {
        Node *newNode = new Node();
        newNode->set(x);
        newNode->setNext(0);
        if (front == 0 && rear == 0)
        {
            front = rear = newNode;
        }
        else
        {
            rear->setNext(newNode);
            rear = newNode;
        }
    }

    void display()
    {
        Node *temp;
        if (front == 0 && rear == 0)
        {
            cout << "Queue is empty : " << endl;
        }
        else
        {
            temp = front;
            while (temp != 0)
            {
                cout << temp->get() << endl;
                temp = temp->getNext();
            }
        }
    }
};

int main()
{
    return 0;
}