#include<bits/stdc++.h>
using namespace std;
#define ll long long int 

void solve(){
	ll x,m; 
	cin>>x>>m;
	ll count=1; 
	ll h = 1;
	while(h<x){
		h*=2;
		count++; 
	}
	if(count>m){
		cout<<0<<endl;
		return;
	}
	ll t= 1 + (m- count) ; 
	cout<<t<<endl; 
	return;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}