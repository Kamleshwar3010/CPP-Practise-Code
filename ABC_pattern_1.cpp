#include<iostream>
using namespace std;

int main(){
	char c='e';
	for(int i=0;i<5;i++){
		for(char j=c;j>='a'; j--){
		cout<<j<<" ";
		}
		cout<<endl;
		c--;
	}
return 0;
}