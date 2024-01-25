#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n, res=0,temp=0,o,c=0;
	cout<<"Enter number"<<endl;
	cin>>n;
	o=n;
	if(n<0){
		cout<<"Please enter positive number";
	}
	else if(n==2){
		res=10;
	}
	else if(n==1){
		res=1;
	}
	else if(n==0){
		res=0;
	}
	else if(n>2){
	while(n>0){
		temp=n%2;
		res=res+pow(10,c)*temp;
		n=n/2;
		c++;
	}
	}
	cout<<"Binary of "<<o<<" is "<<res<<endl;
return 0;
}