#include <iostream>
using namespace std;
void call_by_value(int a)
{
    a = 100;
    // return a;
}
void call_by_ref(int &a) // refernce opertor is used // a is refernce to q
{
    a = 100;
}
// void call_by_ref(int *a) // similar to C, for call by refernce
// {
//     *a = 100; // Assigning the value 100 to the memory location pointed by a
// }

int add(int a = 5, int b = 3, int c = 10)
{
    return a + b + c;
}
int main()
{
    int p = 5;
    call_by_value(p);
    cout << p << endl;
    int q = 5;
    call_by_ref(q);
    // call_by_ref(&q);
    cout << q << endl;
    cout << add(1, 2, 3) << endl; // replace default value
    cout << add(1, 5) << endl;    // use defult value for c
    // add(c=10) // we can not do this b'coz it filling in the values from left to right,
    return 0;
}
