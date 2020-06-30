#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long int n, temp;
    vector<int> vect[1000001];
    cin>>n>>temp;
    
    int v;
    for(int i=1;i<=n;i++){
        cin>>v;
        vect[v].push_back(i);
    }

    while(temp--)
    {
        int d, k, L, R;
        cin>>d>>k>>L>>R;
        int x=0, ansr=-1;
        
        for(auto i=vect[d].begin();i!=vect[d].end() ;i++){
            if( *i>=L&&*i<=R )
                x++;
            if(x==k) {ansr=*i; break;}
        }
        cout<<ansr<<endl;
    }
}