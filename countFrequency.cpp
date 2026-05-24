#include<bits/stdc++.h>
using namespace std;
void countFrequency(int arr[], int n){
 bool visited[n];
 for(int i=0; i<n; i++){
     visited[i]=false;
 }
 for(int i=0; i<n; i++){
     if(visited[i]==true){
         continue;
     }
     int count=1;
     for(int j=i+1; j<n; j++){
         if(arr[i]==arr[j]){
             count++;
             visited[j]=true;
         }
     }
     cout<<arr[i]<<" -> "<<count<<endl;
 }
}
   int main(){
       int n;
       cout<<"Enter Size of Array: ";
       cin>>n;      
       int arr[n];
       cout<<"Enter Elements: ";
       for(int i=0; i<n; i++){
           cin>>arr[i];
       }
       cout<<"Frequency of each elements are: "<<endl;
   countFrequency(arr,n);    
    return 0;
}
