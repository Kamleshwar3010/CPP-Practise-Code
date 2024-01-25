#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    cout << arr[-1] << endl; // return garbage value
    cout << arr[-2] << endl;
    cout << arr[-3];

    return 0;
}
