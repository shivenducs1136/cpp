#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> subsets;
void generate(vector<int> &subset,int i,vector<int>&nums){
	if(i==nums.size()){
		subsets.push_back(subset);
		return; 
	}
	// i ko include nahi kara
	generate(subset,i+1,nums);
	// i ko include kara
	subset.push_back(nums[i]); 
	generate(subset,i+1,nums); 
    subset.pop_back(); 
}


int main(){
	int n; 
	cin>>n; 
	vector<int> nums,subset; 
	for(int i=0;i<n;i++){
		int x; 
		cin>>x; 
		nums.push_back(x); 
	}
	generate(subset,0,nums); 
	for(auto i:subsets){
		for(auto j:i){
			cout<<j<<" ";
		}
		cout<<endl; 
	}
	return 0; 
}