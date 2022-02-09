#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> res; 
void combsum(vector<int> &myvec,int sum,int i,vector<int> &currArray){
	if(sum ==0){
		res.push_back(currArray);
		return;  
	}
	 while (i < myvec.size() && sum - myvec[i] >= 0) {
 
        currArray.push_back(myvec[i]); // add them to list
        combsum(myvec, sum - myvec[i],i, currArray);
        i++;
        myvec.pop_back();
    }
}
int main(){
	int n;
	cin>>n;
	set<int> myset;
	vector<int> vec(n),currArray; 
	for(int i=0;i<n;i++){
		int xxx; 
		cin>>xxx;
		myset.insert(xxx);  
	}
	int t; 
	cin>>t;
	int i=0;
	for(auto o:myset){
		vec[i]=o;i++;
	}
	combsum(vec,t,0,currArray); 
	for(auto i:res){
		for(auto j:i){
			cout<<j<<" ";
		}
		cout<<endl; 
	}
	return 0;
}