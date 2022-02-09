#include<bits/stdc++.h>
using namespace std;
vector<int> vec; 
int getnumm(int n){
	int t = 0; 
	while(t<31){
		if(n&((long long int)(1<<t))){

		}
		else{
			n = n|((long long int)(1<<t)); 
			break; 
		}
		t++; 
	} 
	return n; 
}
int main(){
	int t; 
	cin>>t; 
	while(t--){
		int n; 
		cin>>n; 
		int a,b,c; 
		a = 0;
		b= n;
		c = getnumm(b); 
		cout<<a<<" "<<b<<" "<<c<<"\n";  
	}
	return 0; 
}