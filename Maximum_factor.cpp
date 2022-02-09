#include<bits/stdc++.h>
using namespace std;
int main(){

	int t; 
	cin>>t; 
	while(t--){
		int n; 
		cin>>n; 
		int max_div=0; 
		for(int i=1;i<=n;i++){
			if(n%i==0){
				int count=0;
				int m=n%i;
				for(int J=1;J<=m;J++){
					if(m%J==0){
						count++;  
					}
				}
				if(count>max_div){
					max_div = count; 
				}
			}
		}
		cout<<max_div<<"\n"; 
	}

	return 0; 
}