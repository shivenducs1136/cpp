#include<bits/stdc++.h>
using namespace std; 
int main(){
	int t;
	cin>>t; 
	while(t--){
		int x,y; 
		cin>>x>>y; 
		x=(x-y); 
		if(x<0)x=0;
		if(y==0){
			cout<<x<<endl;
		} 
		else{
			if(x==0){
				cout<<(y*2 -1)<<endl; 
			}
			else{
				cout<<(x+ y*2)<<endl; 
			}
		}
	}
	return 0; 
}