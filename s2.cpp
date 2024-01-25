#include<iostream>
using namespace std;

int main(){
long	int x, n, sum=0,s=-1,res=1;
	cout<<"Enter value of x"<<endl;
	cin>>x;
	cout<<"Enter value of n"<<endl;
	cin>>n;
		for(int i=1; i<=n;i++){
			for(int j=1;j<=i;j++){
				res=res*i;
			}
          sum=sum+res;
			x=x*s;
	}
	cout<<"sum= \t"<<sum;
return 0;
}