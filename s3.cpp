#include<iostream>
#include<math.h>
using namespace std;

int main(){
long	int x, n, z=0, fact=1,s=1;
	cout<<"Enter value of x"<<endl;
	cin>>x;
	cout<<"Enter value of n"<<endl;
	cin>>n;
	if(n>0){
		for(int i=1; i<=n;i=i+2){
			for(int j=1;j<=i;j++){
				fact=fact*i;
			}
			z=((pow(x,i))/fact)*s;
			s=s*-1;
		}
	}
	else{
		cout<<"Please enter value greater than zero for n";
	}
	cout<<"sum= \t"<<z;
return 0;
}