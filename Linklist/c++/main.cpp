#include <iostream>
using namespace std;

class Node
{
private:
    int object;
    Node *nextNode;

public:
    int get()
    {
        return object;
    };
    void set(int object)
    {
        this->object = object;
    };
    Node *getNext()
    {
        return nextNode;
    };
    void setNext(Node *nextNode)
    {
        this->nextNode = nextNode;
    };
};

int main()
{
    return 0;
}