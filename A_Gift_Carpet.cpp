#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<string>s(n);
        
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        string a="vika";
        int count=0,x=0;
        
        for(int j=0;j<m;j++){
            int flag=0;
            for(int i=0;i<n;i++){
                if(s[i][j]==a[x]){
                    x++;
                    flag=1;
                    break;}
            }
        if(flag==1) count++;
        if(count==4) break;}
        if(count==4) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}