#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10; 
int arr[N];  
int main(){
	int t; 
	cin>>t; 
	while(t--){
		int n; 
		cin>>n; 
		for(int i=1;i<=n;i++){
			cin>>arr[i]; 
		}
		sort(arr+1,arr+(n+1)); 
		int prize=0; 
		for(int i=2;i<=n;i++){
			prize+=arr[i];  
		}
		cout<<prize<<endl; 
	}
	return 0; 
}