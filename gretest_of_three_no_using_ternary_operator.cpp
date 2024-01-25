#include<iostream>
using namespace std;

int main(){
	int a, b, c,d;
	cout<<"Enter Number 1-\t";
	cin>>a;
	cout<<"Enter Number 2-\t";
	cin>>b;
	cout<<"Enter Number 3-\t";
	cin>>c;
	d= (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    cout<<"Greatest of all three no is-\t"<<d<<endl;
return 0;
}