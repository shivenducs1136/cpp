#include<bits/stdc++.h>
using namespace std; 
const int N = 1e5+10; 
int arr[N];
int main(){
	int t; 
	cin>>t;
	while(t--){
		int n,k; 
		cin>>n>>k; 
		int num_of_ppl=0; 
		for(int i=1;i<=n;i++){
			cin>>arr[i];
			if(arr[i]>k){
				num_of_ppl++; 
			}
		}
		cout<<num_of_ppl<<endl; 
	}
	return 0; 
}