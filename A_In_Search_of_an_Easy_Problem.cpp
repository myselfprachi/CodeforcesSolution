#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    int flag=0;
    for(long long i=0;i<n;i++){
        int num;
        cin>>num;
        if(num==1){
            flag=1;
            break;

        }
    }
    if(flag==1) cout<<"HARD";
    else cout<<"EASY";
}