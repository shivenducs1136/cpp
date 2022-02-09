#include<bits/stdc++.h>
using namespace std; 
int main(){
	map<pair<string,string>,vector<int>> m; 
	int t; 
	cin>>t; 
	while(t--){
		string fn,ln;
		int n;  
		cin>>fn>>ln>>n; 
		for(int i=0;i<n;i++){
			int cc; 
			cin>>cc; 
			m[{fn,ln}].push_back(cc); 
		}
		
	}
		for(auto &pr: m){
			cout<<pr.first.first<<" "<<pr.first.second<<"\n"; 
			cout<<pr.second.size()<<"\n"; 
			for(auto &p : pr.second){
				cout<<p<<" "; 
			}
			cout<<"\n"; 
		}
	return 0; 
}