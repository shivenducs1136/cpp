#include<bits/stdc++.h>
using namespace std;
int cmp(int a,int b){
	return a>b; 
}
int main(){
	int n;
	cin>>n; 
	map<int,int> mp; 
	for(int i=0;i<n;i++){
		int w; 
		cin>>w; 
		mp[w]++; 
	}
	sort(mp.begin(),mp.end(),cmp);
	for(auto it:mp){
		cout<<it.first<<endl; 
		break;
	}
	return 0; 
}