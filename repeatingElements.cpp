#include<bits/stdc++.h>
using namespace std;
void repeatingElements(vector<int>&arr, int n){
unordered_map<int ,int> freq;
for(int x:arr){
    freq[x]++;
}
cout<<"repeating Elements: ";
for(auto p: freq){
    if(p.second>1){
        cout<<p.first<<" ";
    }
}
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
repeatingElements(arr, n);
    return 0;
}