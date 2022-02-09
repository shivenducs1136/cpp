#include<bits/stdc++.h>
using namespace std; 
int main(){
	int N; 
	cin>>N; 
	while(N--){
		int n,k,x;
		vector<int> vec;  
		cin>>n>>k>>x; 
		if( x>k ){
			cout<<-1<<endl; 
		}
		else{
			int count = 0; 
			for(int i =0; i<n;i++){
				if(count==x){
					count=0; 
				}
				cout<<count<<" "; 
				count++; 
			}
			cout<<endl; 
		}
	}
	return 0; 
}