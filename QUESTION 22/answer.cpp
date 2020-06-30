#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
 
    ll n;
    cin>>n;
    
    while(n--)
    {
        ll a;
        cin>>a;
        ll i,arr[a],brr[a],crr[106]={0},f=0;
        for( i=0;i<a;i++)
        {
            cin>>arr[i];
            crr[arr[i]]=1;
        } 
        for( i=0;i<a;i++)
        {
            cin>>brr[i];
        
            if(crr[brr[i]]==0)
              f=1;
        }  
 
        ll k=-1,round=0,j;
 
        if(f==1)
        {
            cout<<"-10099"<<"\n";
            continue;
        }
 
       for( i=0;i<a;i++)
       {
           for(j=k+1;j<a;j++)
           {
               if(arr[j]==brr[i])
               {
                   k=j;
                   break;
               }
           }
              if(j==a)
               {
                   round++;
                   i--;
                   k=-1;
               }
           
       }
 
        if(f==0)
           cout<<round+1<<"\n";
    }
    return 0;
}
 