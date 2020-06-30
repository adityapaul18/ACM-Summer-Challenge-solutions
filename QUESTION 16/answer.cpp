#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    lli n,i,j,k,t,ans=0,p=0;
    lli a[100000],pun[100001]={0};
    
    cin>>n;
    for(i=0;i<n;i++)
      cin>>a[i];
    
    for(i=0;i<n;i++)
    {
        cin>>t;
        while(true)
        {
            if(pun[a[p]]==1)
             p++;
            
            else 
             break;
        }

        if(t==a[p]) 
        {
            p++;
            goto nn;
        }

        else
        {
            pun[t]=1;
            ans++;
        }
        
        nn: j=0;
    }
    cout<<ans;
}