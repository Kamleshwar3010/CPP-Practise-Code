#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    string str;
	getline(cin,str);
	ofstream out("input.txt");
	out<<str;
return 0;
}