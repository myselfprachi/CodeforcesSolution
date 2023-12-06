#include<bits/stdc++.h>
using namespace std;
void ceiling(int arr[],int n){
    set<int>s;
    for(int i=0;i<n;i++){
        auto it=s.lower_bound(arr[i]);
        if(it==s.end()){
            cout<<"-1"<<" ";
        }
        else cout<<*it<<" ";
        s.insert(arr[i]);
    }
    
}
int main(){
    int arr[] = {6,7,3,4,11,12,30,15};
    ceiling(arr, 8);

}