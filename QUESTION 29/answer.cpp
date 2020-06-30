#include<bits/stdc++.h>
// #define ll long long int
using namespace std;

long long int mol(long long int x,long long int n, long long int mod=1000000007)
{
    if(n==0)
        return 1;
    else if(n%2 == 0)        
        return mol((x*x)%mod,n/2,mod);
    else                            
        return (x*mol((x*x)%mod,(n-1)/2,mod))%mod;
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long int num;
    cin>>num;
    long long int b,a,mm,pre,req;
    while(num--)
    {
        req=1;
        cin>>mm;
       
        if(mm<10) 
        {
            cout<<"-1"<<"\n";
            continue;
        }

        else
        {
            pre=(mm-(mm%10) )/10;
            pre--;
            a=(mol(pre+1 , 10-(mm%10)  ) );
            b=(mol(pre+2, mm%10) );
            req=(a%(1000000007) * b%(1000000007))%(1000000007);
        }
            
            cout<<req<<"\n";
    }   
}

