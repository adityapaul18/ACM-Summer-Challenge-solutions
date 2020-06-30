#include <bits/stdc++.h> 
using namespace std; 


int main() 
{ 
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
     long int a,b,c,d;
     cin>>a>>b;

     priority_queue<long int ,vector<long int>,greater<long int> > l;
     l.push(1);

     vector<long int> arr[a+1];
     bool vst[a+1]={false};
     long k;
     vst[1]=true;

     for(long int i=0;i<b;i++)
     {
         cin>>c>>d;
         arr[c].push_back(d);
         arr[d].push_back(c);
     }

     while(!l.empty())
     {
         k=l.top();
         l.pop();
         cout<<k<<" ";

         for(auto o : arr[k])
         {
             if(!vst[o])
             {
                 l.push(o);
                 vst[o]=true;
             }
         }
     }

     

}