#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n; 
	int sum =0,count=0; 
	for(int i=1;i<=n;i++){
		if((i&1)==0 && n%i ==0 ){
		sum+=i;		
		count++; 	
		}
	}
	cout<<sum << " "<< count<<endl ;
}