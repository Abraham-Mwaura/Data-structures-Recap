#include <iostream>
using namespace std;

int main()
{
    int sortedArr[] = {60, 55, 50, 45, 40, 35, 30, 25}, deletePos, size = 8;
    int unsortedArr[] = {60, 55, 50, 45, 40, 35, 30, 25};

    cout << "Enter the Array position to Delete" << endl;
    cin >> deletePos;

    cout << "Array before element deletion" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << unsortedArr[i] << " ";
    }

    unsortedArr[deletePos - 1] = unsortedArr[size - 1];
    unsortedArr[size - 1] = 0;

    for (int i = deletePos - 1; i < size; i++)
    {
        sortedArr[i] = sortedArr[i + 1];
    }
    sortedArr[size - 1] = 0;

    size--;
    cout << "\nUnsorted array after element deletion" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << unsortedArr[i] << " ";
    }

    cout << "\nSorted array after element deletion" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << sortedArr[i] << " ";
    }

    return 0;
}
