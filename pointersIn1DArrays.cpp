#include <iostream>
using namespace std;

int main()
{
    int a[5] = {11, 12, 13, 14, 15}, i;
    // variable storing the memory address of integer data type variable
    int *q = a;

    cout << "The memory address of the base element of the array" << endl;
    cout << q << endl;
    cout << a << endl;
    cout << &a[0] << endl;
    // array name inherently a pointer pointing to the base element address
    //  Therefore, a, q and &a all output the same memory address.

    cout << "The memory address pointing to the 2nd element of array" << endl;
    cout << &a[1] << endl;
    cout << a + 1 << endl;
    cout << 1 + a << endl;
    cout << q + 1 << endl;
    //There are numerous ways to access the element in array using pointer
    cout << "Printing the value of array elements" << endl;
    cout << a[1] << " " << *(q + 0) << " " << *q + 3 << " " << *(a + 4) << " " << *a + 1 << " " << 2 [a] << " " << a[1] << " " << q[1] << " " << endl;
    return 0;
}
