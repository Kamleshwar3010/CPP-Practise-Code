#include<iostream>
using namespace std;

int main(){
int n, fact=1,sum=0;
	cout<<"Enter value of n"<<endl;
	cin>>n;
		for(int i=1; i<=n;i++){
			for(int j=1;j<=i;j++){
				fact=fact*j;
			}
          sum=sum+fact;
	}
	cout<<"sum= \t"<<sum;
return 0;
}