#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,sum=18;
    cin>>n;

    while(n--)
    {
        ll a;
        cin>>a;

        if(a<20)
          {
              cout<<"NO"<<"\n";
               continue;
          }

        if(a%sum >=2 && a%sum <= 7)
        {
              cout<<"YES"<<"\n";
              continue;
        }

        else
          cout<<"NO"<<"\n";
   
    }
    return 0;
}

