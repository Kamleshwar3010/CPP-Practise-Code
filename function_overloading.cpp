#include <iostream>
using namespace std;

class test
{
public:
    int a, b;
    int sum(int a, int b)
    {
        cin >> a >> b;
        return a + b;
    }
    int sum(int a, int b, int c)
    {
        return a + b + c;
    }
};
int main()
{
    test t;
    cout << t.sum(t.a, t.b) << endl;
    cout << t.sum(2, 3, 4);

    return 0;
}