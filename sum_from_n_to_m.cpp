#include<iostream>
using namespace std;
int main(){
	int n, m, sum=0;
	cout<<"Enter n "<<endl;
	cin>>n;
	cout<<"Enter m "<<endl;
	cin>>m;
	for(int i=n;i<=m;i++){
		sum=i+sum;
	}
	cout<<" Sum=\t"<<sum;
return 0;
}