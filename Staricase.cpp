#include<bits/stdc++.h>
using namespace std;
int main(){

	int n; 
	cin>>n; 
	int j;
	for(int i=0;i<n;i++){
		for(j=0;j<(n-i-1);j++){
			cout<<" "; 
		}
		while(j<n){
			cout<<"#";j++;
		}
		cout<<endl; 
	}

	return 0; 
}