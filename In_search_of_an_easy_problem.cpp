#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; 
	cin>>n; 
	bool flag=1; 
	while(n--){
		int x;
		cin>>x; 
		if(x==1){
			flag =0;
		}
	}
	if(flag){
		cout<<"EASY\n";
	}
	else{
		cout<<"HARD\n";
	}
	return 0; 
}