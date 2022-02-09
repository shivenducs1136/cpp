#include<bits/stdc++.h>
using namespace std; 
int main(){
	int t; 
	cin>>t; 
	while(t--){
		int n; 
		cin>>n; 
		vector<int> vec1,vec2,vec3; 
		for(int i=0;i<n;i++){
			int tt; 
			cin>>tt; 
			vec1.push_back(tt); 
		}
		vec2 = vec1;
		sort(vec2.begin(),vec2.end());	 
		int i_s=0,i_end=n-1;
	
		if(vec2==vec1){
			cout<<"0"<<"\n"; 
		} 
		else{
		for(int i=0;i<n;i++){

			if(vec2[i] - vec1[i] !=0){
				i_s = i;
				break; 
			} 
			if(vec2[i] - vec1[i] !=0){
				i_end = i;
			} 
		} 
		
		for(int i = i_s;i<=i_end;i++){
			vec3.push_back(vec1[i]); 
		}
		sort(vec3.begin(),vec3.end()); 
		cout<<vec3[vec3.size()-1] - vec3[0]<<"\n"; 
	
		}
	}
	return 0; 
}