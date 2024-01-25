#include<iostream>
using namespace std;
class A;//class declaration
class B//class definition
{
private:
int b;
public:
B(int n)//constructor
{
b=n;
}
friend void printValue(A &ax, B &by);//friend function declaration
};
class A//Class definition
{
private:
int a;
public:
A(int n)//constructor
{
a=n;
}
friend void printValue(A &ax, B &by);//friend function declaration
};
void printValue(A &ax, B &by)//friend function definition
{
cout<<"The values are a="<<ax.a<<" and b="<<by.b<<".";//Remove ' ' in ax.a and by.b, otherwise the entire cout statement wouldn't show in here.
}
int main(){
	A a(10);
	B b(9);
	printValue(a, b);
}