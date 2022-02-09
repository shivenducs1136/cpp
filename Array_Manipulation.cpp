//Hackerrank 
// https://www.hackerrank.com/challenges/crush/problem
#include<bits/stdc++.h>
using namespace std; 
const int N = 1e7+10;
long long int arr[N],pr[N];  
int main(){

	int n,m;
	cin>>n>>m;
	while(m--){
		int a,b,k; 
		cin>>a>>b>>k; 
		arr[a]+=k; 
		arr[b+1]-=k; 
	}
	long long int mx= -(1LL<<60); 
	long long int x=0; 
	for(int i = 1; i<=n;i++){
	
		x +=arr[i]; 
		mx = max(mx,x); 

	} 
		cout<<mx<<endl; 
}
// O(m*n+n) = O(n^2); 