#include<iostream>
using namespace std;

int main(){
long	int x, n, res=1;
	cout<<"Enter base number"<<endl;
	cin>>x;
	cout<<"Enter power"<<endl;
	cin>>n;
	if(n>0){
		for(int i=1; i<=n;i++){
				res=res*x;
			}}
      else if(n==0){
      	cout<<"please enter value greater then 0";
	}
	cout<<res;
return 0;
}