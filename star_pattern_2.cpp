#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter Rows-\t";
	cin>>n;
	for(int i=0;i<n;i++) {
		for(int j=0;j<n+n-1;j++){
			if((i>0)&&(j>=n-i-1)&& (j<=n+i-1)){
				 cout<<" ";
			}
			else{
					cout<<"*";
			}
		}
		cout<<"\n";
	}
return 0;
}