#include<bits/stdc++.h>
using namespace std;
int lower_bound(vector<int> &vec,int target){
	int n = vec.size();
	int lo = 0, hi = n-1;
	while(hi-lo>1){
		int mid = (lo+hi)/2;
		if(vec[mid]<target){
			lo = mid+1; 
		}
		else{
			hi = mid; 
		}
	}
	if(vec[lo]>=target){
		return lo;
	}
	if(vec[hi]>=target){
		return hi; 
	}
	else{
		return -1; 
	}
}
int upper_bound(vector<int> &vec,int target){
	int n = vec.size();
	int lo = 0, hi = n-1;
	while(hi-lo>1){
		int mid = (lo+hi)/2;
		if(vec[mid]<=target){
			lo = mid+1; 
		}
		else{
			hi = mid; 
		}
	}
	if(vec[lo]>target){
		return lo;
	}
	if(vec[hi]>target){
		return hi; 
	}
	else{
		return -1; 
	}
}
int main(){
	int n;
	cin>>n; 
	vector<int> vec(n);
	for(int i=0;i<n;i++){
		cin>>vec[i]; 
	}
	int target; 
	cin>>target;
	int lb = lower_bound(vec,target);
	cout<<lb<<endl;
	int ub = upper_bound(vec,target); 
	cout<<ub<<endl;  
	return 0; 
}