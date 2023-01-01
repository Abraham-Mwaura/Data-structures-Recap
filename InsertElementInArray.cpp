#include <iostream>
using namespace std;

int main()
{
    int arr[15] = {1, 2, 3, 4, 5, 6, 7}, insertData, posData;
    int arr2[15] = {1, 2, 3, 4, 5, 6, 7};
    int size = 7;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\nEnter the data that you want to insert: ";
    cin >> insertData;
    cout << "Enter the position that you wish to insert the data: ";
    cin >> posData;

    cout << "Data entered: " << insertData << endl;
    cout << "Position Specified: " << posData << endl;

    for (int i = size - 1; i >= posData - 1; i--)
    {
        arr[i + 1] = arr[i];
    }

    arr[posData - 1] = insertData;

    cout << "Sorted Array after data insertion\n";
    for (int i = 0; i < size + 1; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    arr2[size] = arr2[posData - 1]; // move value in pos at end
    arr2[posData - 1] = insertData; // insert the new value

    cout << "Unsorted Array after data insertion\n";
    for (int i = 0; i < size + 1; i++)
    {
        cout << arr2[i] << " ";
    }

    size++;

    return 0;
}
