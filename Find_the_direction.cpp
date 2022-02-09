#include<bits/stdc++.h>
using namespace std; 
int main(){
	int t,k=0; 
	cin>>t;
	vector<string> vec(1001,"null");
	for(int i= 1; i< 1001 ;i++){
		if(i%4 == 1){
			vec[i] = "East"; 
		}
		if(i%4 == 2){
			vec[i] = "South"; 
		}
		if(i%4 == 3){
			vec[i] = "West"; 
		}
		if(i%4 == 0){
			vec[i] = "North";
		}
	} 
	while(t--){
		int x; 
		cin>>x; 
		cout<<vec[x]<<endl;
	}
	return 0; 
}