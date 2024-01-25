#include<iostream>
using namespace std;
class test2;
class test1{
	int x=100;
	public:
	friend class test2;
};
class test2{
	public:
	void display (test1 t){
		cout<<t.x;
	}
};
int main(){
	test1 t1;
	test2 t2;
	t2.display(t1);
}