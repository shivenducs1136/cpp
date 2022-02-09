#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,n1;
		cin>>n;
		n1 = n*((n-1)/2); 
		int arr[n],marr[n1];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		int p=0; 
		for(int i=0;i<n;i++){
			for(int j=i+1;(i+1)<n && j<n;j++){
				marr[p] = arr[i] & arr[j];
				cout<<marr[p]<<" ,";
				p++; 
			}
		}
		int  l =1; 
		while(p-l!=0){
			sort(marr,marr+n1); 
			marr[0] = marr[0] | marr[p-l];
			marr[p-l] = 0; 
			l++; 
		}
		cout<<marr[0]<<endl; 
	}
	return 0; 
}