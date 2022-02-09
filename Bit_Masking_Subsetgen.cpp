#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> subsetss(vector<int>&nums){
	int n = nums.size();
	int subset_ct = (1<<n); 
	vector<vector<int>> subsets;
	for(int mask=0;mask<subset_ct;mask++){
		vector<int> subsett; 
		for(int i=0;i<n;i++){
			if((mask &(1<<i))!=0){
				subsett.push_back(nums[i]); 
			}
		}
		subsets.push_back(subsett); 
	}
	return subsets; 
}
int main(){
	int n; 
	cin>>n; 
	vector<int> nums;
	for(int i=0;i<n;i++){
		int w;
		cin>>w;
		nums.push_back(w); 
	}
	auto aasubset = subsetss(nums);
	for(auto i:aasubset){
		for(auto j:i){
			cout<<j<<" ";
		}
		cout<<"\n"; 
	}
}