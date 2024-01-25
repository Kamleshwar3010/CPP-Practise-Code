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

char *concat(char str[],char str1[]){
	int i=0;
	char constr[sizeof(str)+sizeof(str1)+1];
    while(str[i] != '\0'){
    	constr[i]=str[i];
    	i++;
    };
    int j=0;
    while(str1[j] != '\0'){
    	constr[i]=str1[j];
    	i++;
    	j++;
    }
    
    return constr;
}
int main(){
	char s[20];
	char s1[20];
	 input(s);
	 display(s);
	 input(s1);
	 display(s1);
	char *g=concat(s, s1);
	display(g);
return 0;
}