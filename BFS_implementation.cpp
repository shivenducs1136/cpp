#include<bits/stdc++.h>
using namespace std;
int main(){
	int u; 
	int i=3;
	queue<int> myq; 
	int visited[7] = {0,0,0,0,0,0,0}; 
	int a[7][7]={
		 {0,1,1,1,0,0,0},
		  {1,0,1,0,0,0,0},
		   {1,1,0,1,1,0,0},
		    {1,0,1,0,1,0,0},
		     {0,0,1,1,0,1,1},
		      {0,0,0,0,1,0,0},
		       {0,0,0,0,1,0,0}
	}; 
	cout<<i<<" "; 
	visited[i] =1; 
	myq.push(i); // Enqueue i for exploration
	while(!myq.empty()){

		int node = myq.front(); 
		myq.pop();  
		for(int j=0;j<7;j++){
			if(a[node][j] == 1 && visited[j] ==0 ){
				cout<<j<<" ";
				visited[j] = 1; 
				myq.push(j);  
			}
		}
	}
}