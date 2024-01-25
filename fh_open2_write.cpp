#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    string str;
	getline(cin,str);
	ofstream out;
    out.open("input1.txt");
	out<<str;
return 0;
}