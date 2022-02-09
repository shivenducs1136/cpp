#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>> res; 
        int l = groupSizes.size();  
        map<int,vector<int>> mp; 
        for(int i=0; i<l ;i++){
            mp[groupSizes[i]].push_back(i);
        }
                int j=0; 
        for(int i=0; i< l;i++){
            vector<int> abc; 
            if(groupSizes[i] == mp[groupSizes[i]].size()){
                abc = mp[groupSizes[i]]; 
            }
            else{
                int lp=0; 
                    int d= INT_MAX;
                while(d!=0){
                    d = groupSizes[i]-lp; 
                    while(d--){
                        abc.push_back(mp[groupSizes[i]][j]);
                        j++;
                    }
                    lp = d; 
                }
            }
            res.push_back(abc); 
            
        }
        return res; 
    }

int main(){
    int n; 
    cin>>n; 
    vector<int> vec; 
    vector<vector<int>> res; 
    for(int i=0;i<n;i++){
        int a;
        cin>>a; 
        vec.push_back(a); 
    }
    res =groupThePeople(vec); 
    for(auto i:res){
        for(auto j:i){
            cout<<j<<" "; 
        }
        cout<<"\n"; 
    } 
    return 0; 
}