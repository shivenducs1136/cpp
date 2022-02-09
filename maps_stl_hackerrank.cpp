#include<bits/stdc++.h>
using namespace std; 
int main(){

	int t;
	cin>>t;  
	map<string,int> m; 
	while(t--){
		int q,y; 
		string x; 
		cin>>q>>x; 
		if(q==1){
			cin>>y;
			m[x] += y;
		}
		 if(q==2){
			m[x] = 0; 
		}
		 if(q==3){
			cout<<m[x]<<endl; 
		}

	}
	return 0; 
}