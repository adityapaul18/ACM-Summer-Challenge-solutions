#include<bits/stdc++.h>
#define ll long long 
using namespace std;

vector<vector<int>> arr(500020);
vector<int> vis(500020),vect(500020),sdstn(500020),ttt(500020),brr;

void DFSR(int node,int oddf,int evenf)
{
	vis[node] = 1;
	int ee=sdstn[node] % 2;

	if (ttt[node] != vect[node])
	{
		if ((ee+1) %2 !=0)
		{
			if(!evenf)
			{
				brr.push_back(node);
				evenf=!evenf;
			}
		}
		else
		{
			if (!oddf)
			{
				brr.push_back(node);
				oddf = !oddf;
			}
		}
	}
	if (ttt[node] == vect[node])
	{
		if ((ee+1) % 2 != 0)
		{
			if (evenf)
			{
				brr.push_back(node);
				evenf = !evenf;
			}
		}
		else
		{
			if (oddf)
			{
				brr.push_back(node);
				oddf = !oddf;
			}
		}
	}
	for(int j=0; j<arr[node].size();j++)
	{
		int x = arr[node][j];
		if (vis[x] != 1)
		{
			sdstn[x] = sdstn[node] + 1;
			DFSR(x,oddf,evenf);
		}
	}
}

ll solve()
{
	int n;
	cin >> n;
	for(int i=0;i<n-1;i++)
	{
		int a, b;
		cin >> a >> b;
		arr[b].push_back(a);
		arr[a].push_back(b);
	}

	for(int i=1;i<=n;i++)
		cin >> ttt[i];
	for (int i = 1; i <= n; i++)
		cin >> vect[i];
	
	vector<int> fdd(2);
	sdstn[1] = 0;
	fdd[0] = 0;
	fdd[1] = 0;
	
	DFSR(1,0,0);
	cout <<brr.size()<<"\n";
	
	sort(brr.begin(), brr.end());
	
	for(int i=0;i<brr.size();i++)
		cout<<brr[i]<<"\n";
	return 1;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
		ll result = 0;
		result = solve();
	
}