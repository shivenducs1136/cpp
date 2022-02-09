#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; 
    cin>>n; 
    map<int,vector<string>> mp; 
    while(n--){
        string s;
        int h; 
        cin>>s>>h; 
        mp[h].push_back(s); 

    }
    for(auto it:mp){
        for(auto i:it.second){

            cout<<i<<" "; 
        }
        cout<<endl; 
    }
    return 0; 
}