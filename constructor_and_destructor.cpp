#include <iostream>
using namespace std;

class test
{
	int a,b;

  public:
	test()
	{
		a = 10;
		b=20;
		cout << "Default Constructor Called with value " << a <<" and "<<b<<endl;
	}
	test(int x,int y):b(y)//instilisation list
	{
		a = x;
		cout << "Paramterised Constructor Called with value " << a <<" and "<<b<<endl;
	}
	test(test &t)
	{
		a = t.a + 20;
		b=  t.b + 20;
		cout << "Copy Constructor Called with value " << a <<" and "<<b <<endl;
	}
	~test()
	{
		cout << "Destructor Called \t";
			cout << a  <<" and "<<b<< endl;
		}
	};
	int main()
	{
		test t;
		test t1(20,30);
		test t2(t);
		return 0;
	}