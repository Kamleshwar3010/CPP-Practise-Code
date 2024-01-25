#include<iostream>
using namespace std;
typedef struct student{
	int rn;
	float marks[5];
	int total;
	char grade;
} stu;
int main(){
	int n;
	cout<<"How many students details you want to enter: \t";
	cin>>n;
     stu arr[n];
	cout<<"Enter detail\n";
	for(int i=0;i<n;i++){
		int sum=0;
		cout<<"Roll No : ";
		cin>>arr[i].rn;
		for(int j=0;j<5;j++){
		cout<<"Subject "<<j+1<<" Marks: ";
		cin>>arr[i].marks[j];
		sum+=arr[i].marks[j];
		}
		arr[i].total=sum;
		cout<<"Grade: ";
		cin>>arr[i].grade;
	}
  	for(int i=0;i<n;i++){
  	 cout<<"Student "<<i+1<<" Detail\n";
		cout<<"Roll No. : \t"<<arr[i].rn<<endl;
		for(int j=0;j<5;j++){
		cout<<"Subject "<<j+1<<" Marks: ";
		cout<<arr[i].marks[j]<<endl;
		}
		cout<<"Total Marks: "<<arr[i].total<<endl;
		cout<<"Grade: "<<arr[i].grade<<endl;
	}
return 0;
}