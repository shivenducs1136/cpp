#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x; 
		cin>>n>>x; 
		if(x>n){
			int res = ((x%(n+1)));			
			cout<<res<<endl; 
		}
		else{
			cout<<x<<endl; 
		}
	}
	return 0; 
}