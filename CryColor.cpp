#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n; 
		cin>>n; 
		int a1,a2,a3; 
		cin>>a1>>a2>>a3; 
		int b1,b2,b3; 
		cin>>b1>>b2>>b3; 
		int c1,c2,c3; 
		cin>>c1>>c2>>c3;
		int sum1=(a2+a3+b3),sum2=(b1+c1+c2); 
		if(a1==n && b2==n && c3==n){
			cout<<"0\n";
		}
		else
		cout<<max(sum1,sum2)<<"\n"; 
	}
	return 0; 
}