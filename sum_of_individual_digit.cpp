#include<iostream>
using namespace std;

int main(){
	int n, sum=0;
	cout<<"Enter number"<<endl;
	cin>>n;
	cout<<"Sum of individuals digit of "<<n<<" will be ";
	while(n>0){
		sum=sum+n%10;
		n=n/10;
	}
	cout<<sum;
return 0;
}