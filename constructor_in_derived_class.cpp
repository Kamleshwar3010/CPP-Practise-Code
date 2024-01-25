#include<iostream>
using namespace std;
class base{
	int x;
	public:
	base(int x){
		cout<<"Base Class Constructor with value "<<x<<endl;
	}
};
class derived:public base{
	int y;
	public:
	derived(int m, int n):base(m){
		y=n;
		cout<<"Derived Class Constructor With value "<<y<<endl;
	}
};
int main(){
	derived d(10, 20);
return 0;
}