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
	printBinary(n); 
	if(!(n&(1))){
		cout<<"EVEN"<<endl;
	}
	else{
		cout<<"ODD"<<endl;
	}
	}
	return 0; 
}