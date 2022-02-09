#include<bits/stdc++.h>
using namespace std; 
#define ll long long int
int main(){
	int t; 
	cin>>t; 
	while(t--){
		ll n,k,res =0; 
		cin>>n>>k; 
		if(n==1 && k ==1){
			cout<<1<<endl; 
		}
		else{
			if(k<2 || k>n){
				cout<<-1<<endl; 
			}
			else{
				for(int i=0;i<k-1;i++){
					cout<<(i+1)<<" "; 
					res = i; 
				}
				for(int i=0;i<n-res-1;i++){
					cout<<(n-i)<<" "; 
				}
				cout<<endl; 
			}
		}

	}
	return 0; 
}