#include<iostream>
using namespace std;
typedef struct student{
	int rn;
	int total;
	char grade;
}st;
void display (st arr[],int n){
		for(int i=0;i<n;i++){
		cout<<"Roll No:\t"<<arr[i].rn<<endl;
		cout<<"Total Marks:\t"<<arr[i].total<<endl;       cout<<"Grade:\t"<<arr[i].grade<<endl;
	}
}
int main(){
	int n;
	cout<<"How many student you have:\t";
	cin>>n;
	st arr[n], temp;
	cout<<"Enter Detail\n";
		for(int i=0;i<n;i++){
		cout<<"Roll No:\t";
		cin>>arr[i].rn;
		cout<<"Total Marks:\t";
		cin>>arr[i].total;
		cout<<"Grade:\t";
		cin>>arr[i].grade;
	}
	cout<<"\n\nOrignal Record\n";
	display(arr,n);
	for(int i=1;i<n;i++){
		for(int j=0;j<i;j++){
			if(arr[i].total>arr[j].total){
				temp.rn=arr[j].rn;
				temp.total=arr[j].total;
				temp.grade=arr[j].grade;
				arr[j].rn=arr[i].rn;
				arr[j].total=arr[i].total;
				arr[j].grade=arr[i].grade;
				arr[i].rn=temp.rn;
				arr[i].total=temp.total;
				arr[i].grade=temp.grade;
				}
		}
	}
				cout<<"\n\nSorted Record\n";
				display(arr,n);
return 0;
}