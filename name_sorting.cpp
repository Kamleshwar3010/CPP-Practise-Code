#include<iostream>
#include<string.h>
using namespace std;

int main(){
	int length;
	cout<<"How many name is in list-\t";
	cin>>length;
	char name[length][20];
	for(int i=0;i<length;i++){
		cout<<"Enter Name "<<i+1<<"\t";
		cin>>name[i];
	}
	cout<<"Showing Name"<<endl;
	for(int i=0;i<length;i++){
		cout<<name[i]<<"\t";
	}
   char temp[length];
	for(int i=0;i<length-1;i++){
		for(int j=i+1;j<length;j++){
			if(strcmp(name[i],name[j])>0){
				strcpy(temp, name[i]);
			strcpy(name[i],name[j]);
			strcpy(name[j],temp) ;
			}
		}
	}
	cout<<"\nShowing Sorted Name"<<endl;
	for(int i=0;i<length;i++){
		cout<<name[i]<<"\t";
	}
return 0;
}