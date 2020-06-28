#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        long long unsigned a[4];
        for(int i=0; i<4; i++)
            cin>>a[i];
        long long unsigned res = 0;
        res += min(a[0], a[1]);
        a[1] -= min(a[0], a[1]);
        long long unsigned min = a[1];
        for(int i=1; i<4; i++)
            if(a[i] < min)
                min = a[i];
        res += min;
        cout<<res<<'\n';
        
    }

    

    return 0;
}

