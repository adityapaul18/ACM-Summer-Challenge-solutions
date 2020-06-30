#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    long long int n;
    cin>>n;
    long long int i,arr[n];

    for(i=0;i<n;i++)   
      cin>>arr[i];

    sort(arr,arr+n);
    long long int s=0,m=0;

    for(i=0;i<n;i++)   
    {
        if(s<=arr[i])
          {
            m++;
            s+=arr[i];
          }
    }
    cout<<m;
    return 0;
}

