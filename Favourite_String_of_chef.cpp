#include<bits/stdc++.h>
using namespace std; 
int main(){
	int t; 
	cin>>t; 
	while(t--){
		int n;
		cin>>n; 
		string s;
		cin>>s; 
		auto it = s.find("code"); 
		auto itt = s.find("chef"); 
		if(it!=n && itt!= n){
			if(it<itt){
				cout<<"AC\n"; 
			}
			else{
				cout<<"WA\n"; 
			}
		}
		else{
			cout<<"WA\n"; 
		}
	}
	return 0; 
}