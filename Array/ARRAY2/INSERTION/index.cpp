#include <iostream>
using namespace std;
int arr[20];
int size;
void Create()
{
    cout << "Enter size of array :" << endl;
    cin >> size;
    cout << "Enter elements of array :" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}
void Display()
{
    cout << "Enter elements of Array  :" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}
void InsertAtEnd()
{
    int x;
    cout << "Enter element at end : " << endl;
    cin >> x;
    arr[size] = x;
    size++;
}
void InsertAtBeg()
{
    int x;
    cout << "Enter element at start : " << endl;
    cin >> x;
    // shift every element at right
    for (int i = size; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = x;
    size++;
}
void InsertAtSepPos()
{
    int num, pos;
    cout << "Enter number do you want to insert " << endl;
    cin >> num;
    cout << "Enter position number " << endl;
    cin >> pos;
    for (int i = size - 1; i >= pos - 1; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos - 1] = num;
    size++;
}
int main()
{
    Create();
    Display();
    InsertAtSepPos();
    Display();
}
