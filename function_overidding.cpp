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
	void display(){
		cout<<"Derived Class value "<<x<<endl;
	}
};
int main(){
	base b;
	derived d;
	b.x=100;
    b.display();
    d. x=100;
	d.display();
	d.base::display();
  return 0;
}