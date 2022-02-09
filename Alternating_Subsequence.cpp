#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t; 
    while(t--){
        int n;
        cin>>n;
        vector<int>vec;
        int maxsum=0; 
        for(int i=0;i<n;i++){
            int w;
            cin>>w;
            vec.push_back(w); 
        }
        int odd_sum=0,even_sum=0;
        for(int i=0;i<n;i++){
            if(i%2!=0){
                odd_sum+=vec[i];
            }            
            else{
                even_sum+=vec[i]; 
            }
        }
        cout<<max(odd_sum,even_sum)<<endl;
       
    }
    return 0; 
}