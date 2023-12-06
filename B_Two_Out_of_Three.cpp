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
        map<int,int>m;
        for(int i=0;i<n;i++){
            m[v[i]]++;
        }
        int count=0;
        for(auto i:m){
        if((i.second)>1){
            count++;
        }
        
        }
        if(count<=1){
            cout<<"-1"<<endl;
        }
        else{
            vector<int>ans;
            for(auto i:m){
                if(i.second>1){
                    ans.push_back(i.first);
                
                if(ans.size()==2) break;
            }
            }
            int first = ans[0];
            int second = ans[1];
            int valueFirst = 1;
            int valueSecond = 2;

            for (int i = 0; i < n; i++) {
              if (v[i] == first) {
        cout << valueFirst << " ";
        valueFirst = 3 - valueFirst;
    } else if (v[i] == second) {
        cout << valueSecond << " ";
        valueSecond = 5 - valueSecond;
    } else {
        cout << 1 << " ";
    }
}

cout<<endl;
        }

    }
}