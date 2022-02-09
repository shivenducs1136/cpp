// LUV Contest 2 ;
// https://www.hackerearth.com/problem/algorithm/doraemon-and-mii-chan/
#include<bits/stdc++.h>
using namespace std;
const int N =1e5+10; 
long long int ar[N],arr[N];  
int main(){
	long long int n,m; 
	cin>>n>>m;
	while(n--){
		int a,b; 
		cin>>a>>b; 
		ar[b] = a;  		  
	}
	bool isopen = true; 	
	for(int i=0;i<m;i++){
		cin>>arr[i];
		cout<<arr[i]<<endl;  
	}
	
	if(isopen){
		cout<<"YES"<<endl; 
	}
	else{
		cout<<"NO"<<endl; 
	}

	return 0; 
}// O(n)