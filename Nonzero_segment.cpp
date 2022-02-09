#include<bits/stdc++.h>
using namespace std; 
const int N = 1e5+10; 
int arr[N]; 
int main(){
	int n; 
	cin>>n; 
	vector<int> v;  
	for(int i=1; i <= n; i++){
		cin>>arr[i];  
	}
	for(int i=1;i<=n;i++){
		arr[i]+=arr[i-1]; 
	}
	map<int ,int> m; 
	for(int i=1;i<=n;i++){
		m[arr[i]]++; 
	}
	bool zero_banega = false;
	int count = 0;  
	for(int i=1;i<=n;i++){
		if(m[arr[i]]>1){
			zero_banega = true;
			count++;  
		}
	}
	if(zero_banega){
		cout<<"YES"<<endl<<count<<endl; 
	}
	else{
		cout<<"NO"<<endl ;
	}


	return 0; 
}