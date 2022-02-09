#include<bits/stdc++.h>
using namespace std;
bool ispossible(string &s , int n ){
	if(n%2!=0){
		return true;
	}
	unordered_map<char,int> mp; 
	for(auto i: s){
		mp[i]++; 
	}
	int d= 0, l =0; 
	for(auto it:mp){
		d = it.second; 
		if(l<d){
			l = d; 
		}
	}
	if(l>(n/2)){
		return true;
	}
	return false; 
}
bool isanti(string &s,int n){
	int low = 0, high = n-1; 
	while(high-low>=1){
		if(s[high] == s[low]){
			return false;
		}
		high--; 
		low++; 
	}
	return true; 
}
void makeanti(string &s, int n){
	sort(s.begin(),s.end());
	int k=0; 
	while(!isanti(s,n) && k<n){
		 sort(s.begin()+k, s.end(), greater<char>());
		k++; 
	}
}
int main(){
	int t; 
	cin>>t; 
	while(t--){
		int n,flag = 1;
		cin>>n; 
		string s;
		cin>>s;
		if(ispossible(s,n)){
			cout<<"NO\n";
		}
		else{
			if(isanti(s,n)){
				cout<<"YES"<<endl; 
				cout<<s<<endl; 
			}
			else{
				cout<<"YES"<<endl; 
				makeanti(s,n); 
				cout<<s<<endl ; 
			}
		}
	}
	return 0; 
}