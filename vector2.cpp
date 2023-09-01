// Write a C++ program that returns the elements in a vector that are strictly smaller than their adjacent left and right neighbours.

//Sample Data:
//({7, 2 ,5, 3, 1, 5, 6}) -> 2, 1
//({1, 2 ,5, 0, 3, 1, 7}) -> 0, 1


#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v;
    vector<int>v2;
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    for(int i=1;i<v.size()-1;i++){
        if((v[i]<v[i-1])&&v[i]<v[i+1]){
            v2.push_back(v[i]);
        }
        
    }
    for(auto j:v2){
        cout<<j<<endl;
    }  
    
}