#include<iostream>
using namespace std;
int main(){
	int r, c;
	cout<<"Enter row and column for matrix: ";
	cin>>r>>c;
	int mat[r][c];
	cout<<" Enter elements in matrix-\n";
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>mat[i][j];
		}
	}
	cout<<"Orignal Matrix-\n";
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<mat[i][j]<<" ";
		}
		cout<<"\n";
	}
	cout<<"Transposed Matrix-\n";
	for(int j=0;j<c;j++){
		for(int i=0;i<r;i++){
			cout<<mat[i][j]<<" ";
		}
		cout<<"\n";
	}
return 0;
}