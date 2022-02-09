#include<bits/stdc++.h>
using namespace std; 
int main(){
	int t;
	cin>>t; 
	while(t--){
		int n,x,y; 
		cin>>n>>x>>y; 
		vector<int> vec; 
		for(int i=0;i<n;i++){
			int w;
			cin>>w;
			if(w<=x && w%y==0)
			vec.push_back(w); 
		}
		cout<<vec.size()<<"\n"; 
	}

	return 0 ;
}