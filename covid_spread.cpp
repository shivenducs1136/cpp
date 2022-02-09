#include<bits/stdc++.h>
using namespace std;
const int N=1e7; 
long long int arr[N]; 
int main(){
	int t;
	cin>>t;
	while(t--){
		long long int n,d,ans; 
		cin>>n>>d; 

		if(d<=10){
			ans = pow(2,d); 
		if(n>ans){
			cout<<ans<<"\n";
		}
		else{
			cout<<n<<"\n";
		}
		}

		else if(d>10 && d<=20){
			ans = 1024 * pow(3,d-10); 
		if(n>ans){
			cout<<ans<<"\n";
		}
		else{
			cout<<n<<"\n";
		}
		}
		else{
			cout<<n<<endl; 
		}
		
	}
	return 0; 
}