#include<bits/stdc++.h>
using namespace std; 
bool vowelh(char a){
	if(a == 'a' || a=='e' || a=='i' || a=='o' || a=='u'){
		return true;
	}
	return false; 
}
int main(){
	int t; 
	cin>>t;
	while(t--){
		int n;
		cin>>n; 
		int ans = 1e9; 
		string p,s; 
		cin>>p>>s; 
		int count =0;
		string p1,s1;  
		for(char i = 'a' ; i<='z';i++){
			p1 = p; s1 = s; 
			count=0; 
			for(int j=0;j<n;j++){
				if(s1[j]=='?'){
					s1[j] = i;
				}
				if(p1[j] =='?'){
					p1[j] = i; 
				}
			}
			for(int j=0;j<n;j++){
				if(s1[j] == p1[j]){
					continue; 
				}
				else if(vowelh(s1[j]) != vowelh(p1[j])){
					count++; 
				}
				else{
					count+=2;
				}
			}
			ans = min(ans,count); 
		}
		cout<<ans<<endl; 
	}
	return 0; 
}