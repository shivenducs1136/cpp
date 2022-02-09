#include<bits/stdc++.h>
using namespace std; 
int main(){
	int t; 
	cin>>t;
	while(t--){
		long long int n,k ; 
		cin>>n>>k; 
		multiset<long long int> m; 
		for(int i=0;i<n;i++){
			long long int t; 
			cin>>t; 
			m.insert(t); 
		}
		long long int sum = 0 ;
		while(k--){
			auto it = --m.end(); 
			sum+=(*it);
			m.insert((*it)/2); 
			m.erase(it); 

		}
		cout<<sum<<endl; 
	}

	return 0; 
}// O(n + k + nlogn) = O(50e5) 