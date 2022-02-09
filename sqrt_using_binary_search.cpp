#include<bits/stdc++.h>
using namespace std; 
double eps=1e-7; 
int multiply(int mid,int n){
	int mul = 1; 
	for(int i=0;i<n;i++){
		mul *=mid; 
	}
	return mul; 
}
int main(){
	double x;
	cin>>x;
	int n;
	cin>>n; 
	double lo = 1, hi =x, mid;
	while(hi-lo>eps){
		mid = (hi+lo)/2; 
		if(multiply(mid,n) <x){
			lo = mid; 
		}else{
			hi = mid; 
		}
	}
	cout<<setprecision(5)<<lo<<"\n"<<hi<<"\n";

}