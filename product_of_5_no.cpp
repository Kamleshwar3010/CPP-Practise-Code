#include<iostream>
using namespace std;
int main(){
int p=1,n;
for(int i=0;i<5;i++){
	cout<<"Enter value-\t";
	cin>>n;
	if(n==0){
		continue;
	}
	else{
		p=p*n;
	}
}
cout<<"\n"<<p;
return 0;
}