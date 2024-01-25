#include <iostream>
using namespace std;
int main()
{
    int a, b, hcf;

    cout<<"Enter first number"<<endl;
    cin>>a;
    cout<<"Enter second number"<<endl;
    cin>>b;

    for(int i=1; i <= a && i <= b; i++)
    {
        // Checks if i is factor of both integers
        if(a%i==0 && b%i==0)
            hcf = i;
    }

    cout<<" H. C. F of "<<a<<" and "<<b<<" is "<<hcf<<endl;
    return 0;
}