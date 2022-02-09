#include<bits/stdc++.h>
using namespace std; 
int main(){
	int n; 
	cin>>n; 
	unordered_map<char,int >m; 
	while(n--){
		char a,b,c; 
		cin>>a>>b>>c; 
		m[a] =1; 
		m[b] = 2; 
		m[c]= 3; 
		char c1,c2; 
		cin>>c1>>c2; 
		if(m[c1]<m[c2]){
			cout<<c1<<endl;
		}
		else{
			cout<<c2<<endl; 
		}
	}
	return 0; 
}