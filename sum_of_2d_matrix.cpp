#include<iostream>
using namespace std;
int main(){
	int r, c;
	cout<<"Enter the row for both Matrix  ";
	cin>>r;
	cout<<"Enter the column for both Matrix ";
	cin>>c;
	int mat1[r][c],mat2[r][c], res[r][c];
	cout<<" Enter element in Matrix - 1\n";
   for(int i=0;i<r;i++){
   	for(int j=0;j<c;j++){
   		cin>>mat1[i][j];
   	}
   }
   cout<<" Enter element in Matrix - 2\n";
   for(int i=0;i<r;i++){
   	for(int j=0;j<c;j++){
   		cin>>mat2[i][j];
   	}
   }
  
   for(int i=0;i<r;i++){
   	for(int j=0;j<c;j++){
   		res[i][j]=mat1[i][j]+mat2[i][j];
   	}
   }
   
   cout<<"Sum of both matrix is-\n";
    for(int i=0;i<r;i++){
   	for(int j=0;j<c;j++){
   		cout<<res[i][j]<<" ";
   	}
   	cout<<"\n";
   }
return 0;
}