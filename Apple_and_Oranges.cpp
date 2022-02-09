#include<bits/stdc++.h>
using namespace std;
int main(){
	int s,t;
	cin>>s>>t; 
	int a,b; 
	cin>>a>>b; 
	int n,m; 
	cin>>n>>m; 
	vector<int> apple,oranges;
	for(int i=0;i<n;i++){
		int w;
		cin>>w;
		apple.push_back(w+a); 
	}
	for(int i=0;i<m;i++){
		int w;
		cin>>w;
		oranges.push_back(w+b); 
	}
	int count_apple=0; 
	for(int i=0;i<n;i++){
		if(apple[i]>=s && apple[i]<=t){
			count_apple++; 
		}
	}
	int count_oranges=0; 
	for(int i=0;i<m;i++){
		if(oranges[i]>=s && oranges[i]<=t){
			count_oranges++; 
		}
	}
	cout<<count_apple<<"\n"<<count_oranges<<"\n"; 
	
	return 0; 
}