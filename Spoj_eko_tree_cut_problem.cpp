#include<bits/stdc++.h>
using namespace std;
const int N=1e6+10; 
int n; 
long long m; 
long long trees[N];
bool isWoodSufficient(long long h){
	long long sum=0;
	for(int i=0;i<n;i++){
		if(trees[i]>=h)	{
			sum += (trees[i]-h);
		}
	}
	return sum>=m;  
} 
int main(){

	cin>>n>>m; 
	for(int i=0;i<n;i++){
		cin>>trees[i]; 
	}
	long long lo= 0, hi = 1e7;
	long long mid;
	while(hi-lo>1){
		mid = (hi+lo)/2;
		if(isWoodSufficient(mid)){
			lo = mid; 
		}
		else{
			hi = mid-1; 
		}
	}
	if(isWoodSufficient(hi)){
		cout<<hi<<"\n";  
	}
	else{
		cout<<lo<<"\n"; 
	}
	return 0; 
}