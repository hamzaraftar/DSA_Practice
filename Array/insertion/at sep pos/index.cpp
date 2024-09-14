#include <iostream>
using namespace std;
int main()
{
    int arr[20], size, pos, num;
    cout << "Enter size of array :" << endl;
    cin >> size;
    cout << "Enter Elements of array :" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter a number to insert in array :" << endl;
    cin >> num;
    cout << "Enter a position to insert in array :" << endl;
    cin >> pos;
    for (int i = size - 1; i >= pos - 1; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos - 1] = num;
    size++;
    cout << "Array aftrer insert at postion :" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}