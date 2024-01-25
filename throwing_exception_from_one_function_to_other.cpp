#include<iostream>
using namespace std;

float divide(float x, float y){
	float z;
	int e;
		z= x/y;
		if(y==0){
		throw y;
		}
		if(y < 0){
			throw e;
		}
	return z;
}
int main(){
	float a, b, c;
	cout<<"Enter two number -\t";
	cin>>a>>b;
	try{
	c=divide(a, b);
	cout<<c;
	}
	catch(float ){
		cout<<"Can't Divide by zero";
	}
	catch(...){
		cout<<"Can't Divide by Negative Number";
	}
return 0;
}