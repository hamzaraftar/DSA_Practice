#include <iostream>
using namespace std;
int main()
{
    int arr[20], size;
    cout << "Enter array size :" << endl;
    cin >> size;
    cout << "Enter elements of array : " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "The element of array are :" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}