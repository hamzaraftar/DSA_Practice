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
};

int main()
{
    return 0;
}