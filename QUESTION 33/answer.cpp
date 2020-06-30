
#include<bits/stdc++.h>
using namespace std;

#define ll int
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    ll r,c;
    cin>>r>>c;

    ll arr[r][c],brr[r][c]={0},grt=0;

    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
             cin>>arr[i][j];

    if(arr[0][0]==0)
    {
        grt=1;
        brr[0][0]=1;
    }


    
    for(int  j=1;j<r;j++)
    {
        if(arr[j][0]==0 && arr[j-1][0]==0)
        {
            brr[j][0]=brr[j-1][0]+1;
            grt=max(grt,brr[j][0]);
        }

        else if(arr[j][0]==0)
        {
            brr[j][0]=1;
            grt=max(grt,brr[j][0]);
        }

        else
           brr[j][0]=0;

    }


    for(int  j=1;j<c;j++)
    {
        if(arr[0][j]==0 && arr[0][j-1]==0)
        {
            brr[0][j]=brr[0][j-1]+1;
            grt=max(grt,brr[0][j]);
        }

        else if(arr[0][j]==0)
        {
            brr[0][j]=1;
            grt=max(grt,brr[0][j]);
        }

        else
           brr[0][j]=0;

    }

     for(int i=1;i<r;i++)
        for(int j=1;j<c;j++)
            if(arr[i][j]==0)
            {
                brr[i][j]= max(brr[i-1][j],brr[i][j-1])+1;
                grt=max(grt,brr[i][j]);
            }


            cout<<grt;

}
        

