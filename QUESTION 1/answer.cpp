#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    long double x, y, a;
    while(n--)
    {
        cin>>x>>y>>a;
        if(x*x == 4*a*y)
            cout<<"YES\n";
        else
            cout<<"NO\n";

        
    }

    

    return 0;
}

