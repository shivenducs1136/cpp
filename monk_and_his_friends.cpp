#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; 
	cin>>t; 
	while(t--){
		int n,m;
		cin>>n>>m; 
		multiset<long long int> ms; 
		for(int i=0;i<n;i++){
			long long int kk; 
			cin>>kk; 
			ms.insert(kk); 
		} 
		while(m--){
			long long int ll; 
			cin>>ll ; 
			auto it = ms.find(ll); 
			if(it == ms.end()){
				cout<<"NO\n"; 
				ms.insert(ll);
			}
			else{
				cout<<"YES\n"; 
			}
		}
	}
	return 0; 
}