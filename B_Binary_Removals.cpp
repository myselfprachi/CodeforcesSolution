#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        string s;
        cin>>s;
        long long a=-1,b=-1;
        for(long long i=1;i<s.size();i++){
            if(s[i-1]=='0'&&s[i]=='0'){
                a=i;
            }
            if(s[i-1]=='1'&&s[i]=='1'&& b<0){
                b=i;
            }
        }
        if(a>0&&b>0&&a>b) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}