#include<bits/stdc++.h>
using namespace std;
int findk(int n,int k){
	if(n==1){
		return 0; 
	}
	int ans = findk(n-1,(k+1)/2); 
	if(ans>0){
		if(k%2!=0){
			return 1;
		}
		else{
			return 0; 
		}
	}
	else{
		if(k%2!=0){
			return 0;
		}
		else{
			return 1; 
		}	
	}
} 
int main(){
	int n,k; 
	cin>>n>>k; 
	cout<<findk(n,k)<<endl;
	return 0; 
}

// #include<bits/stdc++.h>
// using namespace std; 
// vector<string>v; 
// void findk(string s,int n, int k ){
// 	if(n==1){
// 		cout<<s[k-1]<<"\n";
// 		return;  
// 	}
// 	string t=""; 
// 	for(int i=0;s[i]!='\0';i++){
// 		if(s[i]=='0'){
// 			t.push_back('0');
// 			t.push_back('1'); 
// 		}2
// 		if(s[i]=='1'){
// 			t.push_back('1');
// 			t.push_back('0'); 
// 		}
// 	}

// 	findk(t,n-1,k); 

// }

// int main(){
// 	string s="0"; 
// 	int n,k; 
// 	cin>>n>>k;
// 	findk(s,n,k); 
// 	return 0 ; 
// }