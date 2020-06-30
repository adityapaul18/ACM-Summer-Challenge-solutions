#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);

    long long int i, j, n, m, q;
    cin>>n>>m>>q;
    long long int arr[n][m] = {0};
    long long int row[n][2] = {0};
    long long int col[m][2] = {0};
    for(i=1; i<=q; i++){
        long long int a, b, c;
        cin>>a>>b>>c;
        
        if(a == 1)
            row[b-1][0]=c, row[b-1][1] = i+2;
        
        if(a == 2)
            col[b-1][0]=c, col[b-1][1] = i+2;
    }
    
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            if(row[i][1] > col[j][1])
                arr[i][j] = row[i][0];
            else
                arr[i][j] = col[j][0];

            cout<<arr[i][j]<<" ";
        }
        cout<<'\n';
    }
}