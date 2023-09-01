#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        long long hc,dc;
        cin>>hc>>dc;
        long long hm,dm;
        cin>>hm>>dm;
        long long k,w,a;
        cin>>k>>w>>a;
        bool flag=false;
        for(long long i=0;i<=k;i++){
            long long c=hc+(i*a);
            long long m=dc+(k-i)*w;
            long long monster=hm/m;
            if(hm%m) monster++;
            long long character=c/dm;
            if(c%dm) character++;
            if(monster<=character){
                flag=true;
                break;
            }}

        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}