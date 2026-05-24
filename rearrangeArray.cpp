#include<bits/stdc++.h>
using namespace std;
void rearrangeArray(vector<int>& arr, int n){
    sort(arr.begin(),arr.end());
    reverse(arr.begin()+n/2,arr.end());
    cout<<"Re-arranged array:"<<endl;
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    if(n<=0){
        cout<<"Invalid Array: ";
    }
    vector<int> arr(n);
    cout<<"Enter "<<n<< " numbers:"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
     rearrangeArray(arr,n);
     return 0; 
}