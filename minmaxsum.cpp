#include<iostream>
#include<limits.h>
using namespace std;
void minmaxsum(unsigned long long int arr[]){
 long long int maxsum=LLONG_MAX;
      long long int minsum=LLONG_MIN;
    long long int sum=0;
    // int i=0;
    // while(i<5)
    // {
    //  sum=arr[i]+sum;
    //    cout<<sum<<"\t";
    //    i++;
    // }
    for (int i = 0; i < 5; i++)
    {
       sum=arr[i]+sum;
             cout<<sum<<"\t";
        if(maxsum<arr[i]){
          maxsum=arr[i];
        }
        else if(minsum>arr[i]){
          minsum=arr[i];
        }
      }
  cout<<(sum-minsum)<<" "<<(sum-maxsum);


}
int main()
{
unsigned long long int * arr=(unsigned long long int*) malloc(5*sizeof(unsigned long long int));
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    minmaxsum(arr);
return 0;
}
