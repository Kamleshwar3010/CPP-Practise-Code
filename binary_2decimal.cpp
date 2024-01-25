#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int a, b,c,res=0;
	cout<<"Enter no. of bits"<<endl;
	cin>>a;
	if(a>0){
	cout<<"Enter the binary no"<<endl;
	cin>>b;
	a=b;
	for(int i=0;i<a;i++)
	{
		c=b%10;
		b=b/10;
		res=res+(c*(pow(2, i)));
	}
	cout<<"Decimal of "<<a<<" is "<<res;
	}
	else{
		cout<<" Number of digits must be 1 or more";
	}
return 0;
}