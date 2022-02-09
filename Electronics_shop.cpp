#include<bits/stdc++.h>
using namespace std;
int main(){
	int b,n,m; 
	cin>>b>>n>>m; 
	vector<int> keyboard,drive; 
	for(int i=0;i<n;i++){
		int w;
		cin>>w;
		keyboard.push_back(w);
	}
	for(int i=0;i<m;i++){
		int w;
		cin>>w;
		drive.push_back(w);
	}
	int maxcost=-1; 
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if((keyboard[i]+drive[j])<=b){
				if(maxcost<(keyboard[i]+drive[j])){
					maxcost = keyboard[i]+drive[j];
				}
			}
		}
	}
	cout<<maxcost<<"\n";
	return 0; 
}