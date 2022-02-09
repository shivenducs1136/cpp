#include<bits/stdc++.h>
using namespace std;
const int N = 1e7; 
vector<bool> isPrime(N,1);
vector<int> LowestPrimeFactor(N,0);
vector<int> HighestPrimeFactor(N,0);

void SeieveAlgorithm(){
	isPrime[0] = isPrime[1]= 0;
	for(int i=2;i<N;i++){
		if(isPrime[i]){
			LowestPrimeFactor[0] = HighestPrimeFactor[0] = i; 
			for(int j=i*2;j<N;j+=i){
				isPrime[j] = 0 ; 
				HighestPrimeFactor[j] = i; 
				if(LowestPrimeFactor[j] ==0 ){
					LowestPrimeFactor[j] = i;
				}
			}
		}
	}
} 
void PrimeFactors(int num){
	map<int,int> PrimeFact; 

	while(num>1){
		int prime_factors = HighestPrimeFactor[num]; 
		while((num%prime_factors )== 0){
			num = num / prime_factors; 
			PrimeFact[prime_factors]++; 
		}
	}
	for(auto it:PrimeFact){
			cout<<it.first<<" "<<it.second<<endl; 
	}
}
int main(){
	SeieveAlgorithm(); 
	PrimeFactors(66); 

	return 0; 
}