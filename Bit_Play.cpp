#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;


int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int ans=1;
        
	    for(int i=2;i<n;i=i+2){
	        int count=0;
	            if((s[i]-'0')==((s[i-2]-'0')& (s[i-1]-'0'))){ 
	                count++;}
	             if((s[i]-'0')==((s[i-2]-'0')| (s[i-1])-'0')){ 
	                count++;}
	             if((s[i]-'0')==((s[i-2]-'0')^ (s[i-1]-'0'))){ 
	                count++;}
                    
	                ans=ans*count;
                    ans=ans%MOD;
	        
	        
	    }
        
        
	    cout<<ans<<endl;
	}
	return 0;
}
