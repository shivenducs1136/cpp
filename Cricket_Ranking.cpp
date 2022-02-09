#include<bits/stdc++.h>
using namespace std; 
int main(){
	int t; 
	cin>>t; 
	while(t--){
		int sum1=0,sum2=0 ;
		int a1,b1,c1; 
		cin>>a1>>b1>>c1; 
		int a2,b2,c2; 
		cin>>a2>>b2>>c2; 
		if(a1>a2) sum1++;
		else sum2++; 
		if(b1>b2) sum1++; 
		else sum2++; 
		if(c1>c2) sum1++; 
		else sum2++; 
		if(sum1>sum2){
			cout<<"A\n"; 
		}
		else{
			cout<<"B\n"; 
		}
	}
	return 0; 
}