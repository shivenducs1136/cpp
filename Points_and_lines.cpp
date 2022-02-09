#include<bits/stdc++.h>
using namespace std; 
int main(){
	int t; 
	cin>>t; 
	while(t--){
		int n;
		cin>>n; 
		set<int> x; 
		set<int> y; 
		while(n--){
			int a,b; 
			cin>>a>>b; 
			x.insert(a); 
			y.insert(b); 
		}
		cout<<(x.size()+y.size())<<endl; 
	}
	return 0; 
}