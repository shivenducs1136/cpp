#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int d1,d2,d3;
		cin>>d1>>d2>>d3;
		int dsum = d1+d2+d3;
		int s1,s2,s3;
		cin>>s1>>s2>>s3;
		int ssum = s1+s2+s3; 

		if(dsum > ssum){
			cout<<"DRAGON\n";
		}else if(dsum<ssum){
			cout<<"SLOTH\n";
		}
		else{
			if(d1>s1){
				cout<<"DRAGON\n";
			}
			else if(s1>d1){
				cout<<"SLOTH\n";
			}
			else{
				if(d2>s2){
				cout<<"DRAGON\n";
			}
			else if(s2>d2){
				cout<<"SLOTH\n";
			}
			else{
				if(d3>s3){
				cout<<"DRAGON\n";
			}
			else if(s3>d3){
				cout<<"SLOTH\n";
			}
			else{
				cout<<"TIE\n";
			}
			}
			}
		}
		
	}
	return 0;
}