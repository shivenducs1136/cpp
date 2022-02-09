#include<bits/stdc++.h>
using namespace std;
pair<char,int> pp[100]; 
int si=0; 
void countan(string s,int l){
	int ll=0; 
	s=s+"&"; 
	for(int i=1;i<=l;i++){
		int count=1;
		char ch=s[i-1];  
		while(s[i-1] == s[i]){
			count++; 
			i++; 
		}
		pp[ll] = {ch,count};
		ll++;
		si++;  
	}
}
int main(){

	int n; 
	cin>>n;
	n--;
	int lll = n; 
	string s="1"; 
	while(n--){
		countan(s,s.size()); 
		s=""; 
		for(int i=0;i<si;i++){
			string t=""; 
			t.push_back(pp[i].second+'0'); 
			t.push_back((pp[i].first )); 
			s+=t;
		}
		for(int i=0;i<100;i++){
			pp[i] ={0,0}; 
		}
		si=0; 
	}
	cout<<s<<endl;
	
	return 0; 
}