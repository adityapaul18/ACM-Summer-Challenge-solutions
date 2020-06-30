#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    set<int> arr;
    for(int i=0;i<n;i++)
    {
        int b;
        cin>>b;
        arr.insert(b);
    }
   
    vector<int> v1,v2,v3,v4,v5;

    for (auto it = arr.begin(); it != arr.end(); it++) 
    {
        v5.push_back(*it);

        if(*it%3==0)
         v1.push_back(*it);

        else if(*it%2==0)
         v2.push_back(*it);

        else
         v3.push_back(*it);
    } 

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    sort(v3.begin(), v3.end());
    sort(v5.begin(), v5.end());

    int a=0,b=0,c=0;    
     
    for (auto it = v1.begin(); it != v1.end(); it++)  
       {
           v4.push_back(*it);
       }
    
    for (auto it = v2.begin(); it != v2.end(); it++)  
       {
           v4.push_back(*it);
       }

    for (auto it = v3.begin(); it != v3.end(); it++)  
       {
           v4.push_back(*it);
       }
   
    for (int j = 0; j < v5.size(); j++) 
    {
        if(v5[j]>v4[j])
          a++;
        else if(v5[j]<v4[j])
          b++;
        else
         c++;

    }

    cout<<b<<" "<<a<<" "<<c; 
    return 0;
}

