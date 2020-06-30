#include <bits/stdc++.h>   
using namespace std;

long int knapSack(long int W, vector<long int> wt, vector <long int> val,long int n) ;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    char type;
    long int a,b,h,g;
    string str;
    
    cin>>h>>g;
    
    vector<long int>arr,brr;

    for(long int i=0;i<h;i++)
    {
        cin>>str>>type>>a>>b;
        if(type=='S')
        {
            if(a<=g*2)
            {
                arr.push_back(a);
                brr.push_back(b);
            }
        }
        
    }

    long int rest,temp=0;
    temp=knapSack(g,arr,brr,brr.size());
    for(int i=0;i<brr.size();i++)
    {
        long int f=arr[i];
        arr[i]/=2;
        rest=knapSack(g,arr,brr,brr.size());
       
        if(rest>temp)
           temp=rest;
        
        arr[i]=f;   
          
    }
    cout<<temp;
}

long int knapSack(long int W, vector<long int> wt, vector <long int> val,long int n) 
{ 
    long int i, w; 
    long int K[n + 1][W + 1];   
    for (i = 0; i <= n; i++) { 
        for (w = 0; w <= W; w++) { 
            if (i == 0 || w == 0) 
                K[i][w] = 0; 
            else if (wt[i - 1] <= w) 
                K[i][w] = max( 
                    val[i - 1] + K[i - 1][w - wt[i - 1]], 
                    K[i - 1][w]); 
            else
                K[i][w] = K[i - 1][w]; 
        } 
    } 
    return K[n][W]; 
} 