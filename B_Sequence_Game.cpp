#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        vector<int>v2;
        v2.push_back(v[0]);
        int pre=v[0];
        for(int i=1;i<n;i++){
            v2.push_back(v[i]);
            if(v[i]<pre){
                v2.push_back(v[i]);
            }
            pre=v[i];
        }
        cout<<v2.size()<<endl;
        for(int i=0;i<v2.size();i++){
            cout<<v2[i]<<" ";

        }
        cout<<endl;

    }
}