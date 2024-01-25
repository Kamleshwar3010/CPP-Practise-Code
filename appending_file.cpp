#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    string str;
	ifstream in("input1.txt");
	while(in.eof()){
    getline(in,str);
    fstream out("input.txt",ios::app);
    out<<" "<<str;
    }
    in.close();
    
   in.open("input1.txt");
    while(in){
      in>>str;
      cout<<str<<" ";
    }
return 0;
}