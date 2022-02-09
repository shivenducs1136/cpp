#include<bits/stdc++.h>
using namespace std;
int num_of_operations(int n, string s){
	int op =0,req=0 , k =0,l=n; 
	for(int i=n;i>=0;i--){
		req = (op+s[i]-'0')%10; 
		if(req!=0){
			op+=10-req; 
		}
	}
	return op; 
}	
int count_prefix_zeros(int n,string s){
	int op =0 , k =0,l=n; 
	for(int i=n;i>=0;i--){
		op = 10 - (s[i] - '0');
		 k+=op; 
		for(int j=0;j<n;j++){
			s[j] = (((s[j] - '0') + op)%10)+'0';  
		}
	}
	int count=0; 
	for(int i=0;i<s.size();i++){
		if(s[i]!='0'){
			count++; 
			break; 
		}
	}
	return count; 
}
int main(){
	int t;
	cin>>t; 
	while(t--){
		int n,k; 
		cin>>n>>k; 
		string str; 
		cin>>str;
		int d , mid;
		int low = 0, high = n+1; 
		while(high-low>1){
			 mid = (low + high)/2 ; 
			d = num_of_operations(mid-1,str); 
			if(d<=k){
				low = mid; 
			}
			else{
				high= mid; 
			}
		}
		cout<<low<<"\n"; 
	}
	return 0; 
}