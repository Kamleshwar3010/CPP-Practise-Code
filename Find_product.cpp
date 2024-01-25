#include <iostream>
#include<math.h>
using namespace std;
int main() {
	int n;
	cin >> n;    //Reading input from STDIN
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
    long long int Answer=1;
	int mod=pow(10,9);
	mod=mod+7;
	for(int i=0;i<n;i++){
		Answer=arr[i]*Answer;
		Answer%=mod;
	}

	cout<<Answer;

}
