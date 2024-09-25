#include <iostream>
using namespace std;
int main()
{
    int arr[20], size;
    cout << "Enter size of array " << endl;
    cin >> size;
    cout << "Enter elements of array :" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    size--;
    cout << "Array after deletion at beg " << endl;
    cout << "The elements of array are :" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}