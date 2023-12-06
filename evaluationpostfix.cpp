

#include <bits/stdc++.h>
using namespace std;
int evaluatepostfix(string ex){
    stack<int>s;
    for(int i=0;i<ex.size();i++){
        if(isdigit(ex[i])) s.push(ex[i]-'0');
        else{
            int val1=s.top();
            s.pop();
            int val2=s.top();
            s.pop();
            if(ex[i]=='+'){ s.push(val2+val1); }
            else if(ex[i]=='-'){ s.push(val2-val1); }
            else if(ex[i]=='*'){ s.push(val2*val1); }
            else if(ex[i]=='/'){ s.push(val2/val1); }
        }
    }
    return s.top();
}

int main()
{
    string s;
    cin>>s;
    cout<<"evaluation of postfix "<<evaluatepostfix(s);
    
    
    return 0;
}
