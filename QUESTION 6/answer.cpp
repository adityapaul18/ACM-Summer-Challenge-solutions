#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    unsigned long long int n,k,i,j;
    cin>>n>>k;
    unsigned long long int arr[n],s=0;

    for(i=0;i<n;i++)
       cin>>arr[i];

    

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
              s=(s+(k*(k+1))/2)%mod;

            else if((arr[i]<arr[j]))
             s=(s+(k*(k-1))/2)%mod;
        }

    }

    cout<<s%mod;
    return 0;
}

