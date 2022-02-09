#include<bits/stdc++.h>
using namespace std;
void printBinary(int num){
	for(int i=10;i>=0;i--){
		cout<<((num>>i)&1);
	}
	cout<<endl; 
}
int main(){
	int t;
	cin>>t;
	while(t--){
	int n; 
	cin>>n;
	cout<<"Multiplied by 2"<<endl; 
	cout<<(n<<1)<<endl; 
	cout<<"divide by 2"<<endl; 
	cout<<(n>>1)<<endl; 
	
	}
	return 0; 
}