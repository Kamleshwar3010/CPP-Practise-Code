#include<iostream>
using namespace std;
int main(){
	int n,temp, res=0;
	cout<<"Enter number"<<endl;
	cin>>n;
	cout<<"Orignal number-\t"<<n<<endl;
	while(n>0){
		temp=n%10;
		res=res*10+temp;
		n=n/10;
	}
	cout<<"Reversed Number-\t"<<res<<endl;
return 0;
}