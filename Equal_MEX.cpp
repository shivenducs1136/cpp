#include<bits/stdc++.h>
using namespace std; 
int main(){
	int t; 
	cin>>t; 
	while(t--){
		int n ,max=0,min=-1; 
		cin>>n; 
		vector<int> vec;
		map<int,int> mp; 
		for(int i=0;i<(2*n);i++){
			int a; 
			cin>>a; 
			vec.push_back(a); 
			mp[a]++;
			if(max<a){
				max= a; 
			} 
		}
		int flag=1; 
		for(int i=0;i<2*n;i++){
			if(mp[i] == 1 ){
				flag =0;
				break; 
			}
			else if(mp[i] ==0 ){
				break; 
			}
			vec[i] = mp[i]; 
		}
		sort(vec.begin(),vec.end()); 
		if(flag){
			cout<<"YES\n"; 
		}
		else{
			cout<<"NO\n"; 
		}
	}
	return 0; 
}