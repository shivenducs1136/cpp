// https://www.hackerearth.com/problem/algorithm/vaccination-time/
#include<bits/stdc++.h>
using namespace std;
const int N= 1e3+10; 
int arr[N][N];  
int main(){
	int n,m; 
	cin>>n>>m; 
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>arr[i][j]; 
		}
	}
	int odd = 0; 
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(arr[i][j]%2!=0){
				odd++; 
			} 
			arr[i][j]=odd; 
		}
	}
	int q; 
	cin>>q;
	while(q--){
		int x1,y1,x2,y2; 
		cin>>x1>>y1>>x2>>y2;
		int oddCt = 0;  
		oddCt = arr[x1+1][y1-1] - arr[x1][y1-1]+arr[x2][y2] - arr[x1+1][y1-1]; 
		cout<<oddCt<<endl; 
	}
	return 0; 
}