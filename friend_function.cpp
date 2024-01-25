#include<iostream>
using namespace std;
class test{
	int a=100;
	public:
	friend void display(test &t);
};
void display (test &t){
cout<<t.a;
}
int main(){
	test t;
display(t);
return 0;
}