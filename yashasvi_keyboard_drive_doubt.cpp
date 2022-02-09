#include <bits/stdc++.h>
using namespace std;

 int main()
 {
    int keyboards[1000],drives[1000];
    int b,n,m,z=0;
    cin>>b>>n>>m;
    int sum[10000],cost=0;
    int i,j,k;
    
    
    for(i=0;i<n;i++)
     {
         cin>>keyboards[i];
     }
     for(j=0;j<m;j++)
     {
         cin>>drives[j];
     }

    if(n>=1 && n<=1000 && m>=1 && m<=1000 && b>=1 && b<=1000000)
    {
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            
        {
            if(keyboards[i]>=1 && keyboards[i]<=1000000 && drives[j]>=1 && drives[j]<=1000000)
            {
            for(k=0;k<(m+n);k++)
            {
            sum[k]=keyboards[i]+drives[j];
            }
            }
        }
    }
            for(z=0;z<(m+n);z++)
            {
            if( cost && sum[z]>sum[z+1])
            {
                cost=sum[z];
            }
            }
            if(cost>b)
            {
            cout<<-1;
            }
            else
            {
            cout<<cost;
            }
    } 
 
     return 0;
 }
