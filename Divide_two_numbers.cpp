#include<bits/stdc++.h>
using namespace std;
int divide(int dividend,int divisor){
	int a = Math.abs(dividend); 
	int b = Math.abs(divisor); 
	int res=0; 
	while(a-b>=0){
		int x= 0; 
		while((a-(b<<1<<x))>=0){
			x++; 
		}
		res+=1<<x; 
		a-=b<<x; 
	}
	return ((dividend>=0) == (divisor>=0))? (res):(res*(-1)); 
} 
int main(){

	
	return 0; 
}