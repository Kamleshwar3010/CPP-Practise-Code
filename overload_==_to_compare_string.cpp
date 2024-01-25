#include<iostream>
#include<string.h>
using namespace std;

class test{
	char str[20];
	public:
	void input(){
		int n;
		cout<<"Enter size of string ";
		cin>>n;
		cout<<"Enter string: ";
		for(int i=0;i<n;i++){
		cin>>str[i];
		}
	}
	friend void operator ==(test &t,test &t1){
		if(strcmp(t.str, t1.str) == 0){
			cout<<"string is equal";
		}
			else{
				cout<<"string is unequal";
			}
		}
};
int main(){
	test t;
	t.input();
	test t1;
	t1.input();
	t==t1;
return 0;
}