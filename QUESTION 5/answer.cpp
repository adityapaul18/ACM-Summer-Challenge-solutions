#include<bits/stdc++.h>
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
        long long int m,n;
        cin>>m>>n;
        long long int i,j,arr[m+2][n+2];

        for(i=0;i<=m+1;i++)
        {
            for(j=0;j<=n+1;j++)
            {
                if(i==0 || j==0 || i==m+1 ||j==n+1)
                 arr[i][j]=-1;

                else
                 cin>>arr[i][j];
            }
        }

        unsigned long long int s=0;
     
        for( i=1;i<m+1;i++)
        {
           for(j=1;j<n+1;j++)
            {
               if(arr[i][j]>=arr[i][j+1] && arr[i][j]>=arr[i][j-1] &&  arr[i][j]>=arr[i-1][j] && 
                  arr[i][j]>=arr[i+1][j] && arr[i][j]>=arr[i-1][j-1] && arr[i][j]>=arr[i-1][j+1] && 
                  arr[i][j]>=arr[i+1][j-1] && arr[i][j]>=arr[i+1][j+1])
                 {
                    s+=arr[i][j];
                 }

            }
        }

        cout<<s<<"\n";         
    }
}