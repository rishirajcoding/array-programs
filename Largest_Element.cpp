#include<bits/stdc++.h>
using namespace std;
int sortArray(vector<int>& arr){
   
    sort(arr.begin(), arr.end());
    return  arr[arr.size()-1];
}
int main(){
    int n;
    cout<<"Enter Size of Array: ";
    cin>>n;
    if(n<=0){
        cout<<"Invalid Array.";
        return 0;
    }
    vector<int> arr1(n);
    cout<<"Enter "<<n<<" numbers."<<endl;
    for(int i=0; i<n; i++){
        cin>>arr1[i];
    }
  
  
    cout<<"largest number in the array is: "<<sortArray(arr1)<<endl;
    return 0;
}