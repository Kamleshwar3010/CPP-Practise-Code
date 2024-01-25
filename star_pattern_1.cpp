#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter Rows-\t";
	cin>>n;
	for(int i=0;i<n;i++) {
		for (int k=4-i;k>0;k--) {
			cout<<" ";
		}
		for(int j=0;j<=i;j++){
			cout<<"* ";
		}
		cout<<"\n";
	}
return 0;
}