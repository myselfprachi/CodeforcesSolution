#include<bits/stdc++.h>
using namespace std;

int main(){
    cout << "Enter the size of the first array" << endl;
    int n;
    cin >> n;
    vector<int> arr1(n);
    cout << "Enter the array elements" << endl;
    for(int i = 0; i < n; i++){
        cin >> arr1[i];
    }

    cout << "Enter the size of the second array" << endl;
    int m;
    cin >> m;
    vector<int> arr2(m);
    cout << "Enter the array elements" << endl;
    for(int i = 0; i < m; i++){ 
        cin >> arr2[i];
    }

    unordered_set<int> s;

    for(auto x : arr1){
        s.insert(x);  
    }

    int count = 0;

    for(auto x : arr2){
        if(s.find(x) != s.end()){
            count++;
            s.erase(x);
    

        }
    }

    cout << count << endl;


    return 0;  
}
