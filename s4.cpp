#include<iostream>
#include<math.h>
using namespace std;

int main(){
long	int n, x, y, z, res=1;
	cout<<"Enter value of n"<<endl;
	cin>>n;
	cout<<"Enter the value of x, y and z"<<endl;
	cin>>x>>y>>z;
		for(int i=1; i<=n;i++){
				res=res+pow(x,i)*pow(y,i)*pow(z, i);
			}
	cout<<"Sum=\t"<<res<<endl;
return 0;
}