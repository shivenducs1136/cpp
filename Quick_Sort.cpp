#include<bits/stdc++.h>
using namespace std;
void quicksort(vector<int> &arr,int lb,int ub){
	int p=0;
	if(lb<ub){
		p = partition(arr,lb,ub);
		quicksort(arr,lb,p-1); 
		quicksort(arr,p+1,ub);
	}
}
int partition(vector<int> &arr,int lb,int ub){
	int start = lb; 
	int end = ub; 
	int pivot = arr[end];
	while(start<end){
		while(arr[start]<=pivot){
			start++;
		}
		while(arr[end]<pivot){
			end--; 
		}
		if(start<end){
			swap(arr[start],arr[end]);
		}
	}
	swap(arr[lb],arr[end]); 
	return end; 
}
int main(){

	vector<int> arr={2,4,1,5,7,4,3,9};
	quicksort(arr,0,8); 
	for(auto i:arr){
		cout<<i<<" "; 
	} 
	return 0; 
}