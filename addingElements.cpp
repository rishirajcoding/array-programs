#include<bits/stdc++.h>
using namespace std;
void AddingElements(vector<int> &arr, int k,int val){
     // this would insert from beginning of Array.
    arr.insert(arr.end()+k,val);  
    // for backward insertion use this
    //  arr.insert(arr.end()-k,val);
}
int main(){
    int n ,k ,val;
    cout<<"Enter size of Array: ";
    cin>>n;
    if(n<=0){
        cout<<"invalid size..";
    }
    vector<int> arr(n);
    cout<<"Enter "<<n<< " Numbers."<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
       
    }
    // int k;
    cout<<"Enter the position where u want to insert:";
    cin>>k;
    // int val;
    cout<<"Insert number:";
    cin>>val;
    AddingElements(arr,k,val);
    cout<<"Array after insertion: "<<endl;
    for(int num:arr){
        cout<<num<<" ";
    }
    return 0;
}