#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    string str;
	ifstream in;
    in.open("input1.txt");
	while(in){
        in>> str;
        cout<<str<<" ";
    }
return 0;
}