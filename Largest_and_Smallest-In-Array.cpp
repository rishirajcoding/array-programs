#include<bits/stdc++.h>
using namespace std;
void sortArray(vector<int>& arr){
   
    sort(arr.begin(), arr.end());
   
    cout<<" Second smallest number in the array is: "<<arr[1]<<endl;
  
    cout<<" Second largest number in the array is: "<<arr[arr.size()-2]<<endl;
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
    sortArray(arr1);
    return 0;
}