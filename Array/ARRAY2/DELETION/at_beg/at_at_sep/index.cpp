#include <iostream>
using namespace std;
int main()
{
    int arr[5], size, pos;
    cout << "Enter size of array : " << endl;
    cin >> size;
    cout << "Enter elements of array :" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter position number :" << endl;
    cin >> pos;
    for (int i = pos - 1; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    size--;
    cout << "Array after deletion" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}