#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

vector<ll> comp;
const ll MAXN = 1000011;
bool vvv[MAXN];
ll n,m;


void Edge(vector<int> arr[], int a, int b) {
    arr[a].push_back(b);
    arr[b].push_back(a);
}

void DFSR(vector<int> g[], int v) 
{
    vvv[v] = true;
    comp.push_back(v);
    for (size_t i = 0; i < (int) g[v].size(); ++i) 
    {
        int to = g[v][i];
        if (!vvv[to])
            DFSR(g, to);
    }
}


vector<ll> comps(vector<int> g[]) {
    vector<ll> ccc(n + 1);

    for (int i =1 ; i <= n; ++i)
        vvv[i] = false;

    for (int i = 1; i <= n; ++i) {
        if (!vvv[i]) {
            comp.clear();
            DFSR(g, i);

            for (ll j = 0; j < comp.size(); ++j)
                ccc[comp[j]] = comp.size();

        }
    }

    return ccc;
}




int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<ll> rox;
    cin >> n;
    vector<int> vect[n + 1];
    
    cin >> m;
    int a, b;

    for (int i = 0; i < m; i++) 
    {
        cin >> a;
        for (int j = 0; j < a; j++)
        {
            cin >> b;
            rox.push_back(b);
        }

        for (int j = 0; j < a; ++j) 
        {
            for (int k = j + 1; k < a; ++k) 
            {
                Edge(vect, rox[j], rox[k]);
            }
        }
        rox.clear();
    }


    vector<ll> rslt = comps(vect);

    for (int i=1; i<=n; i++) 
        cout<<rslt[i]<<" ";
    
}