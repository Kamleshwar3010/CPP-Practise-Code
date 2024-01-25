#include<iostream>
using namespace std;
int main(){
	int n, m;
	cout<<"Enter n, m"<<endl;
	cin>>n>>m;
	for(int i=n; i<=m;i++){
		for(int j=2;j<i;j++){
			if(i%j == 0){
			break;
			}
			else{
			cout<<i<<" is prime no. "<<endl;
			break;
			}
		}
	}
return 0;
}