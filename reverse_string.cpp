#include<iostream>
using namespace std;

void input(char str[]){
	int n;
	cout<<"Enter the size of string-\t";
    cin>>n;
    cout<<"Enter String-\t";
	for(int i=0;i<n;i++){
	    cin>>str[i];
	}
}

void display(char str[]){
	int n=0;
	while(str[n] !=   '\0'){
		cout<<str[n];
		n++;
	}
	cout<<endl;
}

char *reverse(char str[]){
	int n=0;
	while(str[n] !=   '\0'){
		n++;
	}
	char st[n];
	for(int i=n-1,j=0;i>=0,j<n;i--,j++){
		st[j]=str[i];
	}
	
	return st;
}

int main(){
	char s[20];
	input(s);
	display(s);
	char *s1=reverse(s);
	display(s1);
	
    return 0;
}