#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v;
    int flag=0;
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size()-1;i++){
        if(v[i+1]!=v[i]+1){
            flag=1;
        }
    }
    if(flag==1) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    
    
    
}