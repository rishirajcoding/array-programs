#include<bits/stdc++.h>
using namespace std;
void reverseArray(vector<int>& arr){
    reverse(arr.begin(),arr.end());
}
int main(){
    int n;
    cout<<"Enter Size of Array: ";
    cin>>n;
    if(n<=0){
        cout<<"Invalid Array Size...";
        return 0;
    }
    
    vector<int> arr(n);
    cout<<"Enter "<<n<<" elements: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverseArray(arr);
    cout<<"Reversed Array: "<<endl;
    for(int num:arr){
        cout<<num<<" ";
    }
    return 0;
    
}
