#include<iostream>
using namespace std;
class base{
	public:
	int x;
	void display (){
	cout<<"Base Class value "<<x<<endl;
	}
};

class derived:public base{
	public :
	int y;
	void display(){
		cout<<"Derived Class value "<<y<<" and "<<x<<endl;
	}
};
int main(){
	base b;
	derived d;
	base *bptr=&d;
	derived *dptr=&d;
	bptr->x=100;
    bptr->display();
	dptr->y=55;
	dptr->display();
	dptr->base::display();
//	dptr=&b; not allowed;
//	dptr->display();
return 0;
}