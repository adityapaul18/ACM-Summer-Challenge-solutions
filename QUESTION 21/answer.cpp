
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,q;
    cin>>q;
    while(q--)
    {
        cin>>n;
        priority_queue <long long int> arr;
        long long int p;
        for(long int i=0;i<n;i++)
        {
            cin>>p;
            arr.push(p);
        } 
        
        while(arr.size()>1)
        {
            p=arr.top();
            arr.pop();
            if(p-arr.top()!=0)
            arr.push(p-arr.top());
            arr.pop();
        }
        
        if(arr.size()==1)
           cout<<arr.top()<<"\n";
        else
           cout<<"-1\n";
    }
}