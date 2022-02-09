#include<bits/stdc++.h> 
using namespace std; 
int main(){
	long long int t; 
	cin>>t; 
	while(t--){
		long long int n,m, count=0  ; cin>>n>>m; 
		vector<long long int> vec1(n),vec2(m),res; 
		for(long long int i=0;i<n;i++){
			cin>>vec1[i];

		}
		for(long long int i=0;i<m;i++){
			cin>>vec2[i]; 
		}
		long long int d =0; 
		for(long long int i=1; i<n;i++){
			if(vec1[i-1]<=vec1[i]){
				count++; 
			}
			else{
				count = 0; 
			}
			if(count>d){
					d = count;
			}
		}
		long long int b=0; 

		count=0; 
		for(long long int i=1; i<m;i++){
			if(vec2[i-1]<=vec2[i]){
				count++; 
			}
			else{
				
				count = 0; 
			}
			if(count>b){
					b = count;
			}
		}
		cout<<d+1+b+1<<endl;
	}
	return 0; 
}