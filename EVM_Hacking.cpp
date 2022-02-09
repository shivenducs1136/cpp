#include<bits/stdc++.h>
using namespace std; 
int main(){
	int t;
	cin>>t;
	while(t--){
		vector<int> a(3),b(3); 
		int tsum=0, psum=0; 
		for(int i=0;i<3;i++){
			cin>>a[i]; 
			psum+=a[i]; 
		}
		for(int i=0;i<3;i++){
			cin>>b[i]; 
			tsum+=b[i]; 
		}
		float minvote = ((float)tsum)/((float)2); 
		if(psum>minvote){
			cout<<"YES\n";
		}
		else{
			
		int d =0,gotvote=0 ; 
		d = (b[0] + a[2] + a[1]); 
		if(gotvote<d){
			gotvote = d; 
		}
		d = (a[0] + b[1] + a[2]);
		 if(gotvote<d){
			gotvote = d; 
		}
		d = (a[0] + a[1] + b[2]);
		 if(gotvote<d){
			gotvote = d; 
		}

		if(gotvote>minvote){
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n"; 
		}
	}
	
}

	return 0; 
}