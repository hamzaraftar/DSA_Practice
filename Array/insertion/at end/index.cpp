#include <iostream>
using namespace std;
int main()
{
    int arr[20], size, num, i;
    cout << "Enter size of array :" << endl;
    cin >> size;
    cout << "Enter elements of array :" << endl;
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter number to inset at end :" << endl;
    cin >> num;
    arr[i] = num;
    size++;
    cout << "Arary after insert at end :" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}