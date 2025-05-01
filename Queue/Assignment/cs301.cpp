#include <iostream>
#include <string>
using namespace std;

class Product
{
private:
    int data;
    Product *next;
    int productId;

public:
    int getData()
    {
        return data;
    }
    void setData(int data)
    {
        this->data = data;
    }
    Product *getNext()
    {
        return next;
    }
    void setNext(Product *next)
    {
        this->next = next;
    }
    int getProductId()
    {
        return productId;
    }
    void setProductId(int productId)
    {
        this->productId = productId;
    }
};

class Queue
{
private:
    Product *front;
    Product *rear;

public:
    Queue() : front(nullptr), rear(nullptr) {}
    void enqueue(int data, int id)
    {
        Product *newProduct = new Product();
        newProduct->setData(data);
        newProduct->setProductId(id);
        newProduct->setNext(nullptr);
        if (rear == nullptr)
        {
            front = rear = newProduct;
        }
        else
        {
            rear->setNext(newProduct);
            rear = newProduct;
        }
    }
};
int main()
{
    return 0;
}