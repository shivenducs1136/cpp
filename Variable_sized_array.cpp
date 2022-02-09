#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,q;
	cin>>n>>q;  
    vector<vector<int>> vec; 
    for(int i=0;i<n;i++){
        int siz;
        cin>>siz;
        vector<int> v; 
        for(int j=0;j<siz;j++){
            int a; 
            cin>>a; 
            v.push_back(a); 
        }
        vec.push_back(v); 
    }
    for(int i=0;i<q;i++){
        int i1,j1; 
        cin>>i1>>j1; 
        cout<<vec[i1][j1]<<endl; 
    }
	return 0; 
}