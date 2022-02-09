#include<bits/stdc++.h>
using namespace std; 
int main(){
	int t; 
	cin>>t;
	while(t--){
		int n,xi,yi;
		cin>>n>>xi>>yi;
		if((xi%2==0 && yi%2!=0)||(xi%2!=0 && yi%2==0)){
			cout<<1<<"\n"; 
		}
		else{
			cout<<0<<"\n"; 
		}
	}
	return 0; 
}