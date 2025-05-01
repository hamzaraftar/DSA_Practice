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

    int dequeue()
    {
        if (front == nullptr)
        {
            cout << "Queue is empty " << endl;
            return -1;
        }
        Product *temp = front;
        int serial = temp->getData();
        int pid = temp->getProductId();

        cout << "Solid product with serial :" << serial << "and ID :" << pid << endl;

        front = front->getNext();

        if (front == nullptr)
        {
            rear = nullptr;
        }
        delete temp;
        return serial;
    }

    void displayFront()
    {
        if (front == nullptr)
        {
            cout << "Queue is empyt" << endl;
        }
        else
        {
            cout << "First product in queue -> Serial: " << front->getData() << "Product id: " << front->getProductId() << endl;
        }
    }

    void displayRear()
    {
        if (rear == nullptr)
        {
            cout << "Queue is empyt" << endl;
        }
        else
        {
            cout << "Last product in queue -> Serial: " << rear->getData() << "Product id: " << rear->getProductId() << endl;
        }
    }
};
int main()
{
    string studentID = "BC230403914";
    cout << "Student ID : " << studentID << endl;
    cout << "==========================================" << endl;

    string lastThreeDigits = studentID.substr(studentID.length() - 4);
    int smartphonecout = lastThreeDigits[0] - '0';
    int tabletcout = lastThreeDigits[1] - '0';
    int watchcount = lastThreeDigits[2] - '0';

    string lastFourDigits = studentID.substr(studentID.length() - 4);
    int productid = stoi(lastFourDigits);

    Queue inventory;
    int serialNumber = 1;

    cout << smartphonecout << "smartphones are added to inventory : " << endl;
    for (int i = 0; i < smartphonecout; i++)
    {
        cout << "Added -> Serial : " << serialNumber << "Product ID: " << productid << endl;
        inventory.enqueue(serialNumber, productid);
        serialNumber++;
        productid++;
    }
    cout << endl;

    cout << tabletcout << 'tablets are added to inventory : ' << endl;
    for (int i = 0; i < tabletcout; i++)
    {
        cout << "Added -> Serial : " << serialNumber << "Product ID" << productid << endl;
        inventory.enqueue(serialNumber, productid);
        serialNumber++;
        productid++;
    }
    cout << endl;

    cout << watchcount << 'watches are added to inventory : ' << endl;
    for (int i = 0; i < watchcount; i++)
    {
        cout << "Added -> Serial : " << serialNumber << "Product ID" << productid << endl;
        inventory.enqueue(serialNumber, productid);
        serialNumber++;
        productid++;
    }
    cout << endl;

    cout << "=========================" << endl;
    inventory.displayFront();
    cout << "=========================" << endl;
    inventory.displayFront();
    cout << "=========================" << endl;

    cout << 'Selling products are' << endl;
    inventory.dequeue();
    inventory.dequeue();
    cout << "=========================" << endl;

    inventory.displayFront();
    cout << "=========================" << endl;

    return 0;
}