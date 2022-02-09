#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; 
	cin>>n; 
	vector<int> vec; 
	for(int i=0; i<n;i++){
		int a; 
		cin>>a; 
		vec.push_back(a); 
	}
	int arr[100020]; 
	for(int i=1; i<(100020) ; i++){
		int count=0; 
		for(int j=0;j<vec.size();j++){
			if(vec[j] % i==0){
				count++; 
			}
		}
		arr[i] = count; 
	}
	int q; 
	cin>>q; 
	while(q--){
		int a,b; 
		cin>>a>>b; 
		cout<<(arr[a] + arr[b] - arr[a*b])<<endl; 
	}
	return 0; 
}