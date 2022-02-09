#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main(){

	int t; 
	cin>>t; 
	while(t--){
		ll n,sum=0 ; 
		cin>>n; 
		ll mid = n/2; 
		if(n%2==0 && n!=2){mid--;}
		ll k =2 , l = mid;
		vector<ll> vec(n); 
		vec[mid] = 1;  
		for(ll i=0;vec[i]!=1;i++){
			vec[i] = k; 
			k+=l; 
			l--; 
		}
		k = 3; l = 1; 
		for(ll i = n-1 ; vec[i]!=1;i--){
			vec[i] = k; 
			k+=l; 
			l++; 
		}
		for(ll i=0;i<n;i++){
			sum += ((i+1)^vec[i]); 
		}
		cout<<sum<<"\n"; 
	}
	return 0; 
}