#include <bits/stdc++.h> 
using namespace std;

long int scnd(vector<int> arr[],  int V) 
{ 
    
    queue<int> Q; 
    int val[V+1]={0},visited[V+1]={0};  
   
    Q.push(1); 
    val[1] = 1; 
    visited[1] = 1;  
   
    while (!Q.empty()) 
    { 
        int g, x=Q.front();  
        Q.pop(); 

        for ( int i = 0; i < arr[x].size(); i++) 
        {  
             g = arr[x][i];  
            if (!visited[g]) 
            {  
                visited[g]=1; 
                Q.push(g);  
                val[g] = (val[x] + 1)%2; 
            } 
        } 
    }     
    int c=0;
    for ( int i = 1; i <=V; i++)
    {
        if(val[i]==0)
           c++;
    }
    
    return c; 
} 

int main() 
{ 
    int a,u,v;
    cin>>a;
    if(a==1)
    {
        cout<<"1"<<"\n"<<"1";
    }  

    else
    {
        vector<int> arr[a+1]; 
        for(int i=1;i<a;i++)  
        {  
            cin>>u>>v;
            arr[u].push_back(v);
            arr[v].push_back(u);
        }      
        int count=scnd(arr, a); 
        cout<<"2"<<"\n";
        cout<<a-count<<" "<<count;
    }
}