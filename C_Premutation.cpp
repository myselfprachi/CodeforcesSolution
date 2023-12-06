#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n][n-1];
        for(int i=0;i<n;i++){
            for(int j=0;j<n-1;j++){
                cin>>arr[i][j];
            }
        }
        vector<int>v;
        int a=arr[0][0];
        for(int i=1;i<n;i++){
            if(a==arr[i][0]){
                v.push_back(a);
                break;
            }
        }
        if(v.size()==0){
            v.push_back(arr[1][0]);
            for(int i=0;i<n;i++){
                if(arr[i][0]==a){
                    for(int j=0;j<n-1;j++){
                
                v.push_back(arr[i][j]);}
                break;}
            }

        }
        else{
            for (int i=0;i<n;i++)
            {
                if(arr[i][0]!=a){
                    for(int j=0;j<n-1;j++){
                        v.push_back(arr[i][j]);
                    }
                    break;

                }
            }}
            for(int i=0;i<n;i++){
                cout<<v[i]<<" ";
            }
            cout<<endl;
    }
}