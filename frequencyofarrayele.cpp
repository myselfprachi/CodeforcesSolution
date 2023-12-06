#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"enter the size of array"<<endl;
    int n;
    cin>>n;
    vector<int>arr(n);
    cout<<"enter the array elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    unordered_map<int,int>m;
    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }
    cout<<"Array elements with their frequencies"<<endl;
    for(auto x:m){
        cout<<x.first<<" "<<x.second<<endl;
    }
}