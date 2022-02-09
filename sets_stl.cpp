#include<bits/stdc++.h>
using namespace std; 
int main(){
	int t; 
	cin>>t;
	set<int> s; 
	while(t--){
		int i,x; 
		cin>>i>>x; 
		if(i==1){
			s.insert(x); 
		}
		else if(i==2){
			auto it = s.find(x); 
			if(it!=s.end()){
				s.erase(it);
			}
		}
		else if(i==3){
			bool present= true;
			auto it = s.find(x); 
			if(it==s.end()){
				present = false; 
			}
			if(present){
				cout<<"YES\n"; 
			}
			else{
				cout<<"NO\n"; 
			}
		}
	}
	return 0; 
}