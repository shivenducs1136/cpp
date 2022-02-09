#include<bits/stdc++.h>
using namespace std; 
#define ll long long
int main(){
	int t; 
	cin>>t; 
	while(t--){
		ll n;
		cin>>n; 
		ll num[n]; 
		ll sum = 0;
		for(int i =0; i<n;i++){
			cin>>num[i];
			sum+=num[i];
		}
		if((sum&(sum-1))==0){
			cout<<0<<"\n";
		}
		ll mn=1e8;
		ll minIndex;
		for(int i=0;i<n;i++){
			if(num[i]<mn){
				mn = num[i];
				minIndex=i+1;
			}
		}
		sort(num,num+n);
		ll power = ceil(log2(sum));
		ll diff=pow(w,power)-sum;
		ll inc=  (diff/num[0])+1;
		cout<<1<<"\n"; 
		cout<<1<<" "<<inc<<"\n"; 
		cout<<minIndex;
	}
	return 0; 
}