#include<bits/stdc++.h>
using namespace std; 
int main(){
	int s,c,m;
	cin>>s>>c>>m; 
	vector<vector<int>> vec,mex;  
	int t = s/c, l = t; 
	while(t--){
		vector<int> v; 
		for(int i=0;i<c;i++){
			int aa; 
			cin>>aa; 
			v.push_back(aa);
		}
		sort(v.begin(),v.end()); 
		vec.push_back(v); 
	}
	mex = vec; 
	int countrycnt = 0 ,country=0, current =0, it=0; 
	sort(vec.begin(),vec.end()); 
	vector<int> myx; 
	for(auto i:vec){
		for(auto j:i){
			it++; 
			if(it == m){
				myx = i; 
				current = j;
				break;  
			}
		}
	}
	country=0; 
	for(auto i:mex){
		country++; 
		if(myx==i){
			break; 
		}
	}
	cout<<country<<endl;
	cout<<current<<endl;
	return 0; 
}