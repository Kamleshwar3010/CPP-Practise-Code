#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main(int argc, char const *argv[])
{
        int n;
    if(argc >=2){
        ofstream out;
        out.open(argv[1]);
        cout<<"Enter a number\t";
        cin>>n;
        if(out.fail()){
            cout<<"Can't open file";
        }
        else{
            for (int i = 1; i < 11; i++)
            {
                out<<n*i<<endl;
            }
        }
    }
    else{
        cout<<"Too few argument";
    }
    ifstream in;
    in.open(argv[1]);
    if(in.bad()){
        cout<<"Error !";
        in.clear();
    }
    else{
        while(in){
         //getline(in,n);
         in>>n;
        cout<<n<<endl;
        }
    }
    return 0;
}