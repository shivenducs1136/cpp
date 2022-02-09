#include<bits/stdc++.h>
using namespace std;
const int M = 1e9+7; 
int binexpo(int a,int b){
	if(b==0) return 1;
	long long res = binexpo(a,b/2); 
	if(b&1){
		return (a*((res*res) % M)%M);
	}
	else{
		return ((res*res)%M);
	}
}
int itrbinexpo(int a, int b){
	int ans = 1; 
	while(b!=0){
		if(b&1){
			ans =( ans * 1LL *a )%M; 
		}
		a = (a*1LL*a )%M; 
		b>>=1; 
	}
	return ans; 
}
// agar sabko long long kardoge toh 1LL wala nahi krna padega but kyo faltu ka space lena. 
int main(){
	int a,b; 
	cin>>a>>b;
	cout<<binexpo(a,b)<<endl; 
	cout<<itrbinexpo(a,b)<<endl; 
	return 0; 
}