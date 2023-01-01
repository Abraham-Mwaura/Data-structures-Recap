#include <iostream>
using namespace std;

int main()
{
    int a[2][3] = {{1, 2, 3}, {4, 5, 6}};

    cout << a[0] << endl;
    cout << sizeof(a) / 6 << endl;
    cout << *(a[0] + 4) << endl;

    // first dereferencing changes from 1D array address to element address
    cout << a << " " << **(a + 1) << " " << a[0] + 1 << endl;

    return 0;
}
