#include<bits/stdc++.h>
using namespace std;

template<typename T>
void pop_front(std::vector<T> &v)
{
    if (v.size() > 0) {
        v.erase(v.begin());
    }
}
 

int main(){
	long long int t;
	cin>>t; 
	while(t--){
		long long int n,m; 
		cin>>n>>m; 
		vector<long long int> vec1,vec2,vec3;
		for(int i=0;i<n;i++){
			long long int o; 
			cin>>o; 
			vec1.push_back(o); 
		}
		for(int i=0;i<m;i++){
			long long int o; 
			cin>>o; 
			vec2.push_back(o);
			vec3.push_back(o); 
		}
		sort(vec2.begin(), vec2.end());
		reverse(vec2.begin(),vec2.end());
		int i= 0; 
		while(i<=n){
			if(vec2.front()>vec1.front()){
				pop_front(vec1); 

			}
			else if(vec2.front() == vec1.front()){
				pop_front(vec1);
				pop_front(vec2);
			}
			i++; 
		}
		if(vec2.size()>0 && vec1.size() == 0){
			cout<<"YES"<<endl;
			long long int sm=INT_MAX,sm_i=0; 
			for(int i=0;i<vec3.size(); i++){
				if(sm>vec3[i]){
					sm = vec3[i] ;
					sm_i=i;  
				}
			}
			int a = vec3[0]; 
			vec3[0]= vec3[sm_i]; 
			vec3[sm_i] = a; 
			for(int i=0;i<vec3.size(); i++){
				cout<<vec3[i]<<" "; 
			}
		}
		else{
			cout<<"NO";
			
		}
		cout<<endl; 
	}
}