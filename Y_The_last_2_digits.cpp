#include <iostream>

using namespace std;

int main()
{
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    a=a%100;
    b=b%100;
    c=c%100;
    d=d%100;
    long long ans=a*b*c*d;
    if(ans%100<10) cout<<0<<ans%100;
    else cout<<ans%100;

    return 0;
}