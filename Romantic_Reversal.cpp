#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; 
	cin>>t; 
	while(t--){
		int n,k; 
		cin>>n>>k; 
		string s; 
		cin>>s; 
		int kd = k-1; 
		while(k--){
			swap(s[0],s[kd]); 
			kd--; 
		}
		cout<<s<<"\n"; 
	}
	return 0; 
}