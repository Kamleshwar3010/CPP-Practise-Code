/* When you declare a reference in C++, it acts as an alias or an alternative name for an existing object. It does not create a new memory location. Instead, it refers to the same memory location as the object it is referencing.

we cannot use refernce operator in c
*/
#include <iostream>
using namespace std;

int main()
{
    int x = 5;  // x is an integer variable
    int &p = x; // p is a reference to x // similar to int* p = &x;  in c
    int &q = p; // q is a reference to p // similar to int* q = p;

    // cout << x << endl;
    cout << q << endl;
    q = 10; // Changing q also changes p and x

    // cout << x << endl; // Output: 10
    cout << q << endl; // Output: 10
    cout << &x << endl
         << &p << endl
         << &q;
    return 0;
}
