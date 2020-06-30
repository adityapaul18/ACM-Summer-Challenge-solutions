#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int m,n;
    cin>>m>>n;
    int arr[m];


    for(int i=0;i<m;i++)
      cin>>arr[i];

    while(n--)
    {
        int i,a,b,c,d,count=0;
        cin>>a>>b>>c>>d;

        for( i=c-1;i<d;i++)
        {
            if(arr[i]==a)
              count++;

            if(count==b)
            {
                cout<<i+1<<"\n";
                break;
            }  
        }
        if(i==d)
               cout<<"-1"<<"\n";

        
    }
    return 0;
}

