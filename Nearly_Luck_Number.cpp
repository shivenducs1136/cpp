#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int t,c,k,l,count=0; 
	cin>>t;
	c=t;
	while(c>0){
		k = c%10; 
		if(k == 4 || k == 7){
			count++; 
		}
		c/=10;
	}
	if(count == 4 || count == 7){
		cout<<"YES\n";
	}
	else{
		cout<<"NO\n";
	}
	return 0; 
}