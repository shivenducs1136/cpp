#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b; 
		int row_usable=0,num_of_seat = 0;
		if(a%2!=0){
			row_usable = (a/2)+1; 
		}
		else{
			row_usable = (a/2);
		}
		if(b%2!=0){
			num_of_seat = (b/2)+1;
		}
		else{
			num_of_seat = (b/2);
		}
		cout<<row_usable*num_of_seat<<"\n";
	}

	return 0; 
}