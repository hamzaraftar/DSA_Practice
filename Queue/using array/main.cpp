#include <iostream>
using namespace std;
int queue[5];
int front = -1;
int rear = -1;

void enqueue(int x)
{
    if (rear == 4)
    {
        cout << "Overflow" << endl;
    }
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = x;
    }
    else
    {
        rear++;
        queue[rear] = x;
    }
}

void dequeue()
{
    if (front == -1 && rear == -1)
    {
        cout << "Queue is empty" << endl;
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        cout << "Dequeue element is : " << queue[front] << endl;
        front++;
    }
}
int main() {}