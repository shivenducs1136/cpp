#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int t1,t2,r1,r2;
		cin>>t1>>t2>>r1>>r2; 
		if((((float)t1*(float)t1)/((float)r1*(float)r1*(float)r1)) == (((float)t2*(float)t2)/((float)r2*(float)r2*(float)r2))){
			cout<<"YES\n";			
		}
		else{
			cout<<"NO\n";
		}
	}	

	return 0; 
}