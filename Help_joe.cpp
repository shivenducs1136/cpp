#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m; 
	long long int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i]; 
	}
	int q;
	cin>>q; 
	while(q--){
		long long int x; 
		cin>>x; 
		int max=0,count=0; 
		for(int i=0;i<n ;i++){
			max=(arr[i] + x)%m; 
			if(count<max){
				count = max; 
			}
		}
		cout<<count<<"\n"; 

	}

// O(n) + 
	return 0; 
}