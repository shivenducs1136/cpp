#include <bits/stdc++.h>
using namespace std; 
bool wordPattern(string pattern, string s) {
	unordered_map<char,int> m; 
	unordered_map<string,int> mp;
	vector<int> v1,v2; 
	for(int i=0;i<pattern.size(); i++){
		m[pattern[i]]++; 
	} 
	int j=0; 
	for(int i=0;i<s.size();i++){
		string ss=""; 
		while(j<s.size() && s[j]!=' '){
			ss.push_back(s[j]); 
			j++;
		}
		i = j; 
		j++; 
		mp[ss]++; 
	}
	for(auto i:m){
		v1.push_back(i.second);
	}
	for(auto i:mp){
		v2.push_back(i.second); 
	}
	if(v1.size()!=v2.size()){
		return false; 
	}
	for(int i=0;i<v1.size();i++){
		if(v1[i] != v2[i]){
			return false;
		}
	}
	return true ; 
}
int main(){
	string pattern, s; 
	cin>>pattern;
	cin.ignore(); 
	getline(cin,s); 
	if(wordPattern(pattern,s)){
		cout<<"YES"<<endl; 
	}
	else{
		cout<<"NO"<<endl; 
	}
	return 0; 
}