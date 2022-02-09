#include<bits/stdc++.h>
using namespace std; 
int main(){
	int n;
	cin>>n;
	vector<int> vec; 
	int lo=0,hi=n-1,tofind;
	for(int i=0;i<n;i++){
		int tat; 
		cin>>tat; 
		vec.push_back(tat);
	}
	cin>>tofind; 	
	while(hi-lo>1){
		int mid = (lo+hi)/2; 
		if(vec[mid]<tofind){
			lo = mid+1;
		}
		else{
			 hi = mid;
		}
	}
	if(vec[lo] == tofind){
		cout<<lo<<endl; 
	}
	else if(vec[hi] == tofind){
		cout<<hi<<endl; 
	}
	else{
		cout<<"NOT FOUND"<<endl; 
	}
return 0;
} 