#include <iostream>
using namespace std;
int main()
{
    int arr[50], size, num;
    cout << "Enter Size of array :" << endl;
    cin >> size;
    cout << "Enter elements of array :" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter a number to insert in array :" << endl;
    cin >> num;
    for (int i = size - 1; i >= 0; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[0] = num;
    size++;
    cout << "Array After Insert at begging :" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}