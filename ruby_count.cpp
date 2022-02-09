#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s; 
		cin>>s;
		int arr[256];
		for(int i=0;i<256;i++) arr[i] = 0;  
		vector<int> vec; 
		for(int i=0;i<s.size();i++){
			if(s[i] =='r' || s[i] == 'u' || s[i]=='b' || s[i] =='y')
			arr[s[i]]++; 
		}
		vec.push_back(arr['r']); 
		vec.push_back(arr['u']); 
		vec.push_back(arr['b']); 
		vec.push_back(arr['y']); 
		sort(vec.begin(),vec.end()); 
		cout<<vec[0]<<endl; 
	}
	return 0; 
}