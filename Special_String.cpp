#include<bits/stdc++.h>
using namespace std; 
int main(){
	int t; 
	cin>>t; 
	while(t--){
		int n; 
		cin>>n; 
		string s; 
		cin>>s;
		int m;
		cin>>m;
		int count =0 , dcount=0, d=0,k=1;  
		for(int i=0;i<n;i++){
			if(s[i] == 'a'){
				count=1; 
				dcount =0;
				k=1;
			}
			else{

			if(s[i] == (char)('a'+k)){
					k++;
					count++; 
			}
			else{
				dcount++; 
			}
			}
			if(count == m){
				d = count; 
				break;
			}
		}
		if(d==(m)){
			cout<<dcount<<endl; 
		}
		else{
			cout<<"-1"<<endl; 
		}

	}
	return 0; 
}