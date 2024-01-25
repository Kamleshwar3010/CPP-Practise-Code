#include<iostream>
using namespace std;
class base{
	private:
	int a=100;
	void show_a(){
		cout<<"A :"<<a<<endl;
	}
	protected:
	int b=200;
	void show_b(){
		cout<<"B :"<<b<<endl;
	}
	public:
	int c=300;
	void show_c(){
			cout<<"C :"<<c<<endl;
	}
	void display_base(){
		cout<<"Base Class"<<endl;
		show_a();
		show_b();
		show_c();
	}
};

class derived: public base{
 public:
void display(){
	cout<<"Derived Class"<<endl;
	show_b();
	show_c();
}
};
int main(){
	base b;
	cout<<"Calling Base class using Base Class Object"<<endl;
	b.display_base();
	derived d;
	cout<<"Calling Derived class using Base Derived Object"<<endl;
	d.display();
	cout<<"Calling Base class using derived Class Object"<<endl;
	d.display_base();
return 0;
}