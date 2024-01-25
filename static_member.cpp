#include<iostream>
using namespace std;
class test{
	public:
	static int a;
	int b=10;
	static int func1(){
		a++;
	//	b++; //connot use non static member
		return a;
	}
	int func2(){
		b++;
	//	a++;// can also use static member
		return b;
	}
};
int test::a=10;
int main(){
	test t1,t2, t3;
	cout<<"Value of a for t1= "<<t1.func1()<<endl;
	cout<<"Value of b for t1= "<<t1.func2()<<endl;
	cout<<"Value of a for t2= "<<t2.func1()<<endl;
	cout<<"Value of b for t2= "<<t2.func2()<<endl;
	cout<<"Value of a for t3= "<<t3.func1()<<endl;
	cout<<"Value of b for t3= "<<t3.func2()<<endl;
return 0;
}