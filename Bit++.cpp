#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,x=0; 
	cin>>t;
	string s1="X--",s2="--X",s3="X++",s4="++X"; 
	while(t--){
		string s ;
		cin>>s;
		if(s==s3||s==s4){
			x++; 
		}
		else{
			x--;
		}
	}
	cout<<x<<endl; 
	return 0; 
}