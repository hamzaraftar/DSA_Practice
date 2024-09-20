#include <iostream>
using namespace std;
int main()
{
    int arr[20], size;
    cout << "Enter size of array :" << endl;
    cin >> size;
    cout << "Enter elements of array :" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "The elements in array are :" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}