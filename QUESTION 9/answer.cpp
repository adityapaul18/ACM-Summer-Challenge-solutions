#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    while(n--)
    {
        unsigned long long int i,c=0,b;cin>>b;

        for(i=0;i<b;i++)
        {
            char a;
            cin>>a;

            if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
              c+=(b-i)*(i+1);
        }
         cout<<c<<"\n";
        
    }

    

    return 0;
}

