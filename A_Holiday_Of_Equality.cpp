#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count =0;
    sort(arr,arr+n);
    
    for(int i=0;i<n-1;i++){
        while(arr[i]!=arr[n-1]){
            arr[i]=arr[i]+1;
            count++;
        }
    }
    cout<<count;

    
}