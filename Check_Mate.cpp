// Incomplete 
#include<bits/stdc++.h>
using namespace std; 
int main(){
	int n; 
	cin>>n ; 
	while(n--){
		int xk,yk,xr1,yr1,xr2,yr2; 
		cin>>xk>>yk>>xr1>>yr1>>xr2>>yr2;
		if(yk==1 && yr1==2 &&( yr1>yk+1 || yr1<yk-1 )&& (xr2<xk-1 || xr2>xk+1)){
			cout<<"YES"<<"\n"; 
		} 
		else if(yk == 8 && yr1 == 7 && ( yr1>yk+1 || yr1<yk-1 )&& (xr2<xk-1 || xr2>xk+1)){
			cout<<"YES"<<"\n"; 
		}
		else if(xk==1 && xr1 == 2 && (xr1<xk-1 || xr1>xk+1) &&  ( yr2>yk+1 || yr2<yk-1 )){
			cout<<"YES"<<"\n"; 
		}
		else if(xk==8 && xr1 == 7 && (xr1<xk-1 || xr1>xk+1) &&  ( yr2>yk+1 || yr2<yk-1 )){
			cout<<"YES"<<"\n"; 
		}
		else {
			cout<<"NO"<<"\n"; 
		}
	}
	return 0; 
}