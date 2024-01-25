#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n,temp, res=0,o,c=0;
	cout<<"Enter number"<<endl;
	cin>>n;
	temp=o=n;
	while(temp>0){
	temp=temp/10;
	c++;
	}
	for(int i=0;i<c;i++){
	temp=n%10;
	res=res+(pow(temp,c)) ;
     n=n/10;
	}
	if(o==res){
	cout<<o<<" is armstrong number"<<endl;
}
else{
		cout<<o<<" is not an armstrong number"<<endl;
}
return 0;
}