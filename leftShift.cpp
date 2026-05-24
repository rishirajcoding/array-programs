#include<bits/stdc++.h>
using namespace std;

  void leftshift(int arr[],int n, int k){
      k=k%n;
      int temp[k];
      for(int i=0; i<k; i++){
          temp[i]=arr[i];
      }
      for(int i=k; i<n; i++){
          arr[i-k]=arr[i];
      }
      for(int i=0; i<k; i++){
          arr[n-k+i]=temp[i];
      }
      
  }
  int main(){
      int n,k;
      cout<<"enter size of array: ";
      cin>>n;
      if(n<=0){
          cout<<"Invalid Array: ";
      }
      int arr[n];
      cout<<"Enter "<<n<<" numbers: ";
      for(int i=0;i<n;i++){
          cin>>arr[i];
      }
      cout<<"Enter K: ";
      cin>>k;
      cout<<"Array rotated by K elements: "<<endl;
      leftshift(arr,n,k);
      for(int i=0; i<n; i++){
          cout<<arr[i]<<" ";
      }
      
      
      return 0;
      
      
  }