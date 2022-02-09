#include<bits/stdc++.h>
using namespace std; 
vector<string> subsets; 
void generate(string &s,int index , string &mystr ){
	if(index == mystr.size()){
		subsets.push_back(mystr); 
	}

	generate(s,index+1,mystr); 
	
	s.push_back(mystr[index]);
	generate(s,index+1,mystr);
	s.pop_back(); 
}
int main(){
	unordered_map<char,int> mp; 
	string s,ss;
	int t;
	cin>>s>>t; 
	generate(s,0,ss);
	int longest=0,flag=0;  
	for(int i=0;i<subsets.size();i++){
			string tt = subsets[i];
			cout<<tt<<endl; 
			flag=0; 
			int count=0;
			unordered_map<char,int> m1; 
			for(int j=0;j<tt.size();j++){
				m1[tt[j]]++; 
			}
			for(auto ll:m1){
				if(ll.second<t){
					flag=1;
					break;
				}
				count+=ll.second; 
			}
			if(flag ==0){
				if(longest<count){
					longest = count; 
				}
			}
	}
	cout<<longest<<endl; 
	return 0; 
}