#include<iostream>
using namespace std;
class test{
	int x;
	public:
	test(int a):x(a){
		cout<<"Value of X: "<<x<<endl;
		}
	friend void operator ++(test &t){
		cout<<"Value of X: "<<++t.x;
	}
};

int main(){
	test t(500);
	++t;
	
return 0;
}