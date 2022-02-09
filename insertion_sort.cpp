#include<bits/stdc++.h>
using namespace std;
void insertionsort(vector<int> &arr,int n){
	int temp =0,j=0; 
	for(int i=1;i<n;i++){
		temp = arr[i]; 
		j=i-1;
		while(j>=0 && arr[j]>temp){
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = temp ;
	}
} 
void print(vector<int> &arr){
	for(auto it: arr){
		cout<< it<<" "; 
	}
	cout<<endl;
}
int main(){
	int n ;
	cin>>n;
	vector<int> vec;  
	for(int i=0;i<n;i++){
		int w; 
		cin>>w; 
		vec.push_back(w); 
	}
	insertionsort(vec,n); 
	print(vec);

	return 0;
}