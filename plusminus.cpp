# include<iostream>
#include <iomanip>
using namespace std;

void plusminus(int arr[],int size){
double countz=0,countp=0,countn=0;
    for(int i=0;i<size;i++){
        if(arr[i]>0){
            countp++;
            continue;
        }
        else if(arr[i]<0){
            countn++;
            continue;
        }
        else if(arr[i]==0){
            countz++;
            continue;
        }
    }
    cout<<std::fixed << std::setprecision(6)<<countp/size<<endl;
    cout<<countn/size<<endl;
    cout<<countz/size<<endl;
}
int main()
{
    int size;
    cin>>size;
    int * arr=(int*) malloc(size*sizeof(int));
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
   plusminus(arr,size);

return 0;
}