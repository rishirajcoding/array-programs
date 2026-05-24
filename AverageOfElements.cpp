#include<bits/stdc++.h>
using namespace std;

  void AverageOfArray(int arr[],int n){
     double sum=0;
     for(int i=0; i<n; i++){
        sum+=arr[i];
     }
     double avg=sum/n;
     cout<<"Average: "<<avg;
     
  }
  int main(){
      int n;
      cout<<"enter size of array: ";
      cin>>n;
      if(n<=0){
          cout<<"Invalid Array: ";
          return 0;
      }
      int arr[n];
      cout<<"Enter "<<n<<" numbers: ";
      for(int i=0;i<n;i++){
          cin>>arr[i];
      }
    AverageOfArray(arr,n);
      return 0;
  }