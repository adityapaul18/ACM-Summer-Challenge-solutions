#include<bits/stdc++.h>
using namespace std;

typedef long long int lli;
typedef unsigned long long int ull;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    lli n, m, q, z;
    char ch;
    cin >> n >> m >> q;
    lli x[n], y[m];
    for (lli i = 0; i < n; ++i) {
      
        cin>>x[i];
    }

    for (lli i = 0; i < m; ++i) 
    {
        cin>>y[i];
    }

    sort(x, x+n);
    sort(y, y+m);

    for (lli t = 0; t < q; ++t) {
        cin >> z;
        cin >> ch;
        lli l1, l2, r1, r2;
        ull ncount = 0;

        lli n1= n-1;
        lli m2= m-1;
        lli nn ,b,w;
        nn = l1= w=0;

        if(ch != 'B'){
            cin>>l1>>n1;

            l1 = distance(x, lower_bound(x, x+n, l1));
            n1= distance(x, upper_bound(x, x+n, n1))-1;

        }

        lli *i= x+l1 -1;
        if(ch!='A'){
            cin>>w>>m2;
            w = distance(y, lower_bound(y, y+m, w));
            m2 = distance(y, upper_bound(y, y+m, m2))-1;

        }

        int d = m2;

        while (++i-x-n1-1){
            while ((z- *(i)<(*(y+d)))*(w<=d))
                d--;

            if(w>d)
                goto last;
            nn+= d-w+1;

        }
        last:

        cout<<nn<<endl;

    }


}