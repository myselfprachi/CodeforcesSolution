#include<bits/stdc++.h>
using namespace std;
int main(){
    long long x;
    cin>>x;
    long long even=0,odd=0,negative=0,positive=0;
    for(long long i=1;i<=x;i++){
        cin>>i;
        if(i%2==0) even++;
        if(i%2!=0) odd++;
        if(i<0) negative++;
        if(i>0) positive++;
    }
    cout<<"Even: "<<even<<endl;
    cout<<"Odd: "<<odd<<endl;
    cout<<"Positive: "<<positive<<endl;
    cout<<"Negative: "<<negative<<endl;
}