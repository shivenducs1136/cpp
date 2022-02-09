#include<bits/stdc++.h>
using namespace std; 
vector<string> vec;  
void subString(string str, int n)
{
    for (int len = 1; len <= n; len++)
    {   
        for (int i = 0; i <= n - len; i++)
        {
            int j = i + len - 1;
            string t="";           
            for (int k = i; k <= j; k++){
            	t.push_back(str[k]);
            }
            vec.push_back(t);
             
        }
    }
}
 

int main(){
	int t; 
	cin>>t;
	 while(t--){
	 	string s; 
	 	char b; 
	 	cin>>s>>b ;
	 	for(int i=0;i<s.size();i++){
	 		if(s[i]== b){
	 			s[i] ='0'; 
	 		}
	 	}
	 	string k=""; 
	 	for(auto o:s){
	 		if(o!='0'){
	 			k.push_back(o);
	 		}
	 	}
	 	subString(k,k.size());
	 	int count=0; 
	 	for(auto i: vec){
	 		count++; 
	 	}
	 	cout<<count<<endl ; 
	 }
	return 0; 
}