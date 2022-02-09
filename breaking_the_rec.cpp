#include<bits/stdc++.h>
using namespace std;
int main(){

	int n; 
	cin>>n; 
	int arr[n],min=0,max=0; 
	for(int i=0;i<n;i++){
		cin>>arr[i]; 

	}
	min = arr[0]; 
	max = arr[0];
	int min_count=0,max_count=0;  
	for(int i=1;i<n;i++){
		if(min>arr[i]){
			min = arr[i]; 
			min_count++; 
		}
		if(max<arr[i]){
			max = arr[i]; 
			max_count++; 
		}
	}
	cout<<max_count<<" "<<min_count<<endl; 


	return 0; 
}