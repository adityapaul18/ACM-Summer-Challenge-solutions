#include<bits/stdc++.h>
using namespace std; 
  
struct cordnts 
{   
    long long int a, b; 
  
    bool operator<(cordnts p) 
    { 
        return a < p.a || (a == p.a && b < p.b); 
    } 
}; 

long long int check(cordnts O, cordnts V1, cordnts V2) 
{ 
    return (V1.a - O.a) * (V2.b - O.b) 
           - (V1.b - O.b) * (V2.a - O.a); 
} 
  
vector<cordnts> convex_hull(vector<cordnts> V1) 
{ 
    int n = V1.size(), ppl = 0; 
  
    if (n <= 3) 
        return V1; 
  
    vector<cordnts> rqarea(2 * n); 
  
    sort(V1.begin(), V1.end()); 
  
    for (int i = 0; i < n; ++i) 
    { 
          while (ppl >= 2 && check(rqarea[ppl - 2],  rqarea[ppl - 1], V1[i]) <= 0) 
            ppl--; 
        rqarea[ppl++] = V1[i]; 
    } 
  
    for (size_t i = n - 1, t = ppl + 1; i > 0; --i) 
    { 
        while (ppl >= t && check(rqarea[ppl - 2], 
                           rqarea[ppl - 1], V1[i - 1]) <= 0) 
            ppl--; 
        rqarea[ppl++] = V1[i - 1]; 
    } 
  
    rqarea.resize(ppl - 1); 
  
    return rqarea; 
}
int main() 
{ 
    vector<cordnts> vect; 
    long int num,te  mp,a,b;

    cin>>num; 
    temp=num; 

    if(temp>=3)
    {
       while(num--)
       {
              cin>>a>>b;       
          vect.push_back({a,b}); 
       }   
  
 
       vector<cordnts> rslt = convex_hull(vect); 
        long long int   answer=0; 
  
    
       long long int jj=rslt.size();

       long long int j = jj - 1; 

       for (long long int i = 0; i < jj; i++) 
       { 
           answer += (rslt[i].a+rslt[j].a) * (rslt[j].b - rslt[i].b); 
           j = i; 
       } 
       answer=abs(answer);

        if(answer==0)
            cout<<"-1";
                
        
        else if(answer%2==1)
         cout<<abs((answer/2)*2+1); 
        
        else
         cout<<abs((answer/2)*2); 

                  
     }

     else if(temp<3)
     {
        cout<<"-1";
     }  
  
}
  