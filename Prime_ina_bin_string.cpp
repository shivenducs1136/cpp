#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s; 
        cin>>s; 
        auto it = s.find("10");
        auto it2 = s.find("11");
        if(it<s.size() || it2< s.size()){
            cout<<"YES\n"; 
        } 
        else {
            cout<<"NO\n"; 
        }
    }
    return 0; 
}