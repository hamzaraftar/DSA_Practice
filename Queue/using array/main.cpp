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

void display()
{
    if (front == -1 && rear == -1)
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        for (int i = front; i < rear + 1; i++)
        {
            cout << "Queue element is : " << queue[i] << endl;
        }
    }
}

void peek()
{
    if (front == -1 && rear == -1)
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        cout << "The element in Front of Queque is : " << queue[front] << endl;
    }
}
int main()
{
    enqueue(3);
    enqueue(7);
    enqueue(4);
    enqueue(9);
    enqueue(1);
    display();
    dequeue();
    display();

}