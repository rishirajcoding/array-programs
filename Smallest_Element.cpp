#include<bits/stdc++.h>
using namespace std;
int sortArray(vector<int>& arr){
    sort(arr.begin(),arr.end());
    return arr[0];
}
int main (){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    if(n<=0){
        cout<<"invalid Array.";
        return 0;
    }
    vector<int> arr1(n);
    cout<<"Enter "<<n<< " number in Array."<<endl;
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    cout<<"Smallest number in Array is: "<<sortArray(arr1)<<endl;
    return 0;
}