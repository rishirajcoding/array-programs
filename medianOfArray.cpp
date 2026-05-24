#include<bits/stdc++.h>
using namespace std;

  void MedianOfArray(vector<int>& arr,int n){
   sort(arr.begin(), arr.end());
    cout<<"Sorted Array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
   float median;
  
  if(n%2==0){
      median= float(arr[n/2] + arr[n/2-1])/2;
   }
   else {
       median=arr[n/2];
   }
   cout<<"median: "<<median;
   }
   
  
  int main(){
      int n;
      cout<<"enter size of array: ";
      cin>>n;
      if(n<=0){
          cout<<"Invalid Array: ";
          return 0;
      }
      vector<int> arr(n);
      cout<<"Enter "<<n<<" numbers: ";
      for(int i=0;i<n;i++){
          cin>>arr[i];
      }
    MedianOfArray(arr,n);
      return 0;
  }