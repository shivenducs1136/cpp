#include<bits/stdc++.h>
using namespace std;
void printBinary(int num){
	cout<<" "<<num<<" : ";
	for(int i=10;i>=0;i--){
		cout<<((num>>i) & 1);// working of this statement is explained below. 
	}
	cout<<endl;
}
/*
	printBinary working 
	let num = 9 : 00000001001
	0000000001001 & 0000000001 = 0000000000001
	0000000000100 & 0000000001 = 0000000000000
	0000000000010 & 0000000001 = 0000000000000
	0000000000001 & 0000000001 = 0000000000001
	0000000000000 & 0000000001 = 0000000000000
	and so on.. upto 5;
	result is 000000001001 
*/
int main(){
	int a = 9,i=1,n=1; 
	printBinary(9);	

	printBinary(i<<n); 
	// leftshift
	cout<<"Left shift"<<endl; 
	printBinary(a<<1); 
	// rightshift
	cout<<"Right shift"<<endl; 
	printBinary(a>>1); 
	// set bit hai ki nahi 
	n = 0; 
	cout<<"Set hai ki nahi"<<endl; 
	printBinary(a&(i<<n));
	// set karo nth bit
	n=1;
	cout<<"Set karo bit ko"<<endl; 
	printBinary(a); 
	printBinary((i<<n));
	printBinary(a|((i<<n)));
	cout<<"Using tilda ~a operator"<<endl;
	cout<<"a : "; 
	printBinary(a);
	cout<<"~a : ";
	printBinary(~a);  
	cout<<"Unsetting a bit"<< endl;
	n=0; 
	printBinary(a); 
	printBinary(~(i<<n)); 
	printBinary(a&(~(i<<n)));
	// toggle a bit 
	n=2; 
	cout<<"toggling 2nd bit of a"<<endl; 
	printBinary(a);
	printBinary(i<<n); 
	printBinary(a ^ (i<<n));
	cout<<"count of set bits in a : "<<endl; 
	int count =0, unset_count=0; 
	for(int j=0;j<31;j++){
		if((a&(i<<j))!=0){
			count++; 
		}
		else{
			unset_count++; 
		}
	}
	cout<<"set bits are : "<<count<<endl; 
	cout<<"unset bits are : "<<unset_count<<endl; 
	cout<<"Using __builtin_popcount(a) to count the set bits of a\n";
	cout<<__builtin_popcount(a)<<endl; 
	return 0; 
}