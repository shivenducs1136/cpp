// Codechef
// https://www.codechef.com/problems/GCDQ
#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if(a == 0 ){
    	return b; 
    }
    return gcd(b%a,a);
}
int main (){
	int t; 
	cin>>t; 
	while(t--){
		int n,q; 
		cin>>n>>q; 
		int arr[n+10]; 
		for(int i=1;i<=n;i++){
			cin>>arr[i]; 
		}
		while(q--){
			int l,r; 
			cin>>l>>r; 
			int gc=0; 
			for(int i = 1; i<=l-1;i++){
				gc = gcd(gc , arr[i]); 
			}
			for(int i = r+1 ; i<=n;i++){
				gc = gcd(gc,arr[i]) ; 
			}
			cout<<gc<<endl; 
		}
	}
	return 0; 
}/*
// Codechef
// https://www.codechef.com/problems/GCDQ
#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if(a == 0){
    	return b; 
    }
    return gcd(b%a,a); 
}
int main (){
	int t; 
	cin>>t; 
	while(t--){
		int n,q; 
		cin>>n>>q; 
		int arr[n+10],forward[n+10],backward[n+10]; 
		forward[0] = backward[n-1] = 0; 
		for(int i=1;i<=n;i++){
			cin>>arr[i]; 
		}
		for(int i = 1; i<=n;i++ ){
			forward[i] = gcd(forward[i-1],arr[i] ); 
		}
		for(int i = n; i>=1;i-- ){
			backward[i] = gcd(backward[i+1],arr[i] ); 
		}
		while(q--){
			int l,r; 
			cin>>l>>r; 
			int gc=0; 
			gc = gcd(forward[l-1],backward[r+1]); 
			cout<<gc<<endl; 
		}
	}
	return 0; 
}
*/