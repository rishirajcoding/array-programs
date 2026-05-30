// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int> &arr ,int n){
    int i=0;
    for(int j=1; j<n;j++){
        if(arr[i]!=arr[j]){
          
            arr[i+1]=arr[j];
              i++;
        }
    }
    return i+1;
}
int main() {
    int n;
    cout<<"Enter Size of Array: ";
    cin>>n;
    if(n<=0){
        cout<<"Invalid Array Size!!!";
    }
    vector<int> arr(n);
    cout<<"Enter "<<n<<" numbers: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
   
    int k = removeDuplicates(arr,n);

cout<<"Array after removing duplicates:"<<endl;

for(int i=0; i<k; i++){
    cout<<arr[i]<<" ";
}
    return 0;
}