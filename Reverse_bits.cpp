#include<bits/stdc++.h>
using namespace std;

uint32_t reverseBits(uint32_t n) {
      
      string s=""; 
      uint32_t  sum =0 ; 
      for(int i=0; i< 32; i++){
          if(n&(1<<i)){
            s.push_back('1'); 
          }
          else{
            s.push_back('0'); 
          }

      }
      int k=0; 
      for(int i = s.size()-1; i>=0;i--){
        if(s[i] == '1'){
          sum = sum + (1<<k); 
        }
        k++; 
      }
  
      return sum ;         
    }
int main(){
  uint32_t s; 
  cin>>s;
  cout<<reverseBits(s)<<endl; 
	return 0; 
}