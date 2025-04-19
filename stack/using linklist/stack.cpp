#include <iostream>
#include "Node.cpp"
using namespace std;

class Stack
{
private:
    Node *top = 0;

public:
    void push(int x)
    {
        Node *newNode = new Node();
        newNode->set(x);
        newNode->setNext(top);
        top = newNode;
    }
    void Display() {}
    void pop() {}
    void peek() {}
};

int main()
{
    Stack stack;
    stack.push(4);
    stack.push(5);
    stack.push(7);
}