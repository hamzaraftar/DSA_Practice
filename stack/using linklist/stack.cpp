#include <iostream>
#include "Node.cpp"
using namespace std;

class Stack
{
private:
    Node *top = 0;
    Node *currentNode;

public:
    void push(int x)
    {
        Node *newNode = new Node();
        newNode->set(x);
        newNode->setNext(top);
        top = newNode;
    }
    void Display()
    {
        currentNode = top;
        if (top == 0)
        {
            cout << "Stack is empty " << endl;
        }
        else
        {
            while (currentNode != 0)
            {
                cout << "Stack elements are : " << currentNode->get() << endl;
                currentNode = currentNode->getNext();
            }
        }
    }
    void peak()
    {
        if (top == 0)
        {
            cout << "Stack is empty " << endl;
        }
        else
        {
            cout << "Top element is " << top->get() << endl;
        }
    }

    void pop()
    {
        currentNode = top;
        if (top == 0)
        {
            cout << "Stack is empty " << endl;
        }
        else
        {
            cout << "Pop element is  " << top->get() << endl;
            top = top->getNext();
            delete (currentNode);
        }
    }
};

int main()
{
    Stack stack;
    stack.push(4);
    stack.push(5);
    stack.push(7);
    stack.Display();
    stack.pop();
    // stack.peak();
}