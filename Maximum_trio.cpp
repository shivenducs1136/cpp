#include<bits/stdc++.h>
using namespace std; 
#define ll long long int
int main(){
	ll t; 
	cin>>t; 
	while(t--){
		ll n; 
		cin>>n; 
		multiset<int> s; 
		while(n--){
			ll pp; 
			cin>>pp; 
			s.insert(pp); 
		}
		auto it_f = s.begin(), it_l = --s.end(); 
			ll ans ;
			ans = ((*it_l) - (*it_f))*(*(--(it_l))); 
			cout<<ans<<"\n"; 

		for(auto it : s){
			cout<<it<<" ";
		}
		cout<<"\n"; 
	}
	return 0; 
}