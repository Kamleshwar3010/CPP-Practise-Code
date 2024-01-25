#include<iostream>
using namespace std;

class test{
	int x;
	public:
	test(int a):x(a){
		cout<<"Value of X before : "<<x<<endl;
	}
	test &operator --(){
		--x;
		return *this;
	}
	void display(test &t){
	cout<<"Value of X after : "<<x<<endl;
	}
};
int main(){
	test t(500);
	test t1(--t);
	t1.display(--t);
return 0;
}