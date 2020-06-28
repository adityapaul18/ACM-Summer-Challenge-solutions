#include <bits/stdc++.h>
using namespace std;

   int main()
   {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
    long long a, b;
    cin>>a>>b;

    long arr[a+b] = {0};
    int brr[a];
    for(long i=0; i<a; i++)
        cin>>arr[i];
    
       long long unsigned min_sum = 0;

    for(long i=0; i<a; i++)
    {
        cin>>brr[i];
        if(brr[i] == 1)
            min_sum += arr[i];
    }

    long long max_ch = 0;
    for(long i=0; i<b; i++)
        if(brr[i] == 0)  
            max_ch += arr[i];

    long chng = max_ch;
    for(long i=1; i<a; i++)
    {   
        if(i<= a-b)
        {    
            if(brr[i-1] == 0)
                chng -= arr[i-1];

            if(brr[i-1+b] == 0)
                chng += arr[i-1+b];
        }
        else{
            for(long j=0; j<a; j++)
                chng -=arr[i-1];
        }
        if(chng > max_ch)
            max_ch = chng;
    }
   
    min_sum += max_ch;
    cout<<min_sum;
}
