#include<bits/stdc++.h>
using namespace std; 
#define ll long long int
int main(){
	ll n;
	cin>>n;// sieve of ernath
	while(n--){
		ll t;
		cin>>t;
		ll count=0,low=2,high=t-1;
		for(int i=2;i*i<=t;i++)
		if(t%i==0){
			count++;
		} 
		// while(high-low>=1){
		// 	if(t%low==0 || t%high==0){
		// 		count++; 
		// 	}
		// 	low++;
		// 	high--; 
		// }
		if(count==1){
			cout<<"YES"<<"\n"; 
		}
		else{
			cout<<"NO"<<"\n"; 
		}
	}
	return 0; 
}