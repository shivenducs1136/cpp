#include<bits/stdc++.h>
using namespace std; 
int main(){

	map<int,multiset<string>> m; 
	int t;
	cin>>t; 
	while(t--){
		int marks; 
		string name; 
		cin>>name>>marks; 
		m[marks].insert(name); 
	}
	auto cur_it= --m.end();
	while(true){
		auto &students = (*cur_it).second; 
		int marks= (*cur_it).first; 
		for(auto student : students){
			cout<<student<<" "<<marks<<endl; 
		}
		if(cur_it == m.begin()){
			break; 
		}
		cur_it--; 
	} 
	return 0; 
}