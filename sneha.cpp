#include<bits/stdc++.h>
using namespace std;
void printBinary(int n){
	for(int i=10;i>=0;i--){
		cout<<((n>>i)&1); 
	}
	return;
}

int main(){
	int n;
	cin>>n;
	printBinary(n);
	return 0; 
}