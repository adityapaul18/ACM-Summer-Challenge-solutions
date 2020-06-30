#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int num;
    cin>>num;
    while(num--)
    {
        int a;
        cin>>a;
        int count=0,check;
        while(a>1)
        {    
            check=0;
            int b=sqrt(a);
            for(int i=2;i<=b+1;i++)
            {
                if(a%i==0)
                {
                    count++;
                    check++;
                    a=a/i;
                    break;
                }
            }
            if(check==0)
            {
                count++;
                break;
            }
        }
        cout<<count<<"\n";
    }

}