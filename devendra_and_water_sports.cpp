#include<bits/stdc++.h>
using namespace std; 
int main(){
	int t; 
	cin>>t;
	while(t--){
		int z,y,a,b,c; 
		cin>>z>>y>>a>>b>>c; 
		a = a+b+c; 
		z = z-y; 
		if(z>=a){
			cout<<"YES\n"; 
		}else{
			cout<<"NO\n"; 
		}
	}
	return 0;
}