#include <iostream>
#include "Node.cpp"
using namespace std;

class List
{
private:
    Node *headNode;
    Node *currentNode;
    Node *lastCurrentNode;
    int size;

public:
    // Constructor
    List()
    {
        headNode = new Node();
        headNode->setNext(NULL);
        currentNode = NULL;
        size = 0;
    };
    void add(int addObject)
    {
        Node *newNode = new Node();
        newNode->set(addObject);
        newNode->setNext(NULL);

        if (currentNode != NULL)
        {
            newNode->setNext(currentNode->getNext());
            currentNode->setNext(newNode);
            lastCurrentNode = currentNode;
            currentNode = newNode;
        }
        else
        {
            newNode->setNext(NULL);
            headNode->setNext(newNode);
            lastCurrentNode = headNode;
            currentNode = newNode;
        }
        size++;
    };
};

int main()
{
    List list;
    list.add(1);
    list.add(2);
    list.add(3);    
    return 0;
}