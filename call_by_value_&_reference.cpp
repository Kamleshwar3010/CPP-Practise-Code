#include<iostream>
using namespace std;
void call_by_address(int *a){
	cout<<"\nAdress of a inside call_by_address\t"<<&a<<endl;
	cout<<"\nValue of a inside call_by_address\t"<<a<<endl;
}
void call_by_reference(int &b){//call by address
cout<<"\nAddress of b inside call_by_reference\t"<<&b<<endl;
cout<<"\nValue of b inside call_by_reference\t"<<b<<endl;
}
int main(){
	int x=50,y=20;
cout<<"Address of x inside main function\t"<<&x<<endl;
cout<<"\nAddress of y inside main function\t"<<&y<<endl;
	call_by_address(&x);
	call_by_reference(y);
return 0;
}