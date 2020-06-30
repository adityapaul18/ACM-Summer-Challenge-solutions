#include <bits/stdc++.h> 
using namespace std; 
typedef long long int ll; 
#define pb push_back 
  
void greaterK(ll n, ll k) 
{ 
  
    vector<ll> p; 
    ll x = n; 
    while (x) 
    { 
        p.pb(x % k); 
        x /= k; 
    } 

    int idx = 0; 
    for (ll i = 0; i < (ll)p.size() - 1; ++i) 
    { 
        if (p[i] >= 2) 
        { 
            p[i] = 0; 
            p[i + 1]++; 
  
  
            for (int j = idx; j < i; ++j) { 
                p[j] = 0; 
            } 
            idx = i + 1; 
        } 
  
        if (p[i] == k) { 
            p[i] = 0; 
            p[i + 1]++; 
        } 
    } 
    ll j = (ll)p.size() - 1; 
 
  
    if (p[j] >= 2) { 
        for (auto& i : p) 
            i = 0; 
        p.pb(1); 
    } 
    ll ans = 0; 
 
    for (ll i = p.size() - 1; i >= 0; --i) { 
        ans = ans * k + p[i]; 
    } 
    cout << ans << endl; 
} 
  
int main() 
{ 
    ll n ,k ,num;
    cin>>num;
    while(num--)
    {
        cin>>n;
        k=3;

         greaterK(n, k);
    }
    
    return 0; 
} 