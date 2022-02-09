#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a;
		cin>>n>>a;
		if(n==1) {
     		if((a&1)==0)
      			cout<<"Even\n";
     		else
			     cout<<"Odd\n";
		}
		else{
   			if((a&1)==0)
		     cout<<"Impossible\n";
    		else {
       		if(n%2!=0) 
       			cout<<"Odd\n";
       		else
     			cout<<"Even\n";
   			}
		}
	}
	return 0;
}