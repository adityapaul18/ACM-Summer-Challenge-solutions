#include<bits/stdc++.h>

#define ll long long 
#define fos(i,n,l) for(int i=0;i<n;i+=l)

using namespace std;

vector<long long int> table(65);

ll solve()
{
	ll ans = 0;
	ll n;
	ll m;
	vector<long long int> bitn(63), bitx(63);
	cin >> n >> m;
	ll one = 1;
	ll msb = -1;
	for (int i = 0; i < bitn.size(); i++)
	{
		bitn[i] = ((one << i) & n) ? 1 : 0;
        
		if (bitn[i])
			msb = i;
	}

	ll sum = 0;
	vector<long long int> v(m);
	
    for(int i=0;i<m;i++)
	{
		cin >> v[i];
		sum += v[i];

	    for(int j=0;j<bitx.size();j++)	
		{
			bitx[j] += ((one << j) & v[i]) ? 1 : 0;
		}

	}
	vector<long long int> mis;
	if (sum < n)
		return -1;

	ll k = 0;

	for (ll i = 0; i < bitn.size(); i++)
	{
		if (bitn[i] == 1) 
		{
			if (bitx[i] > 0)
			{
				k += table[i];
				bitx[i]--;
			}
			else
			{
				bool b = false;
				for (ll j = 0; j < i; j++)
				{
					if(j+1 < bitx.size())
						bitx[j + 1] += (bitx[j] / 2);
					bitx[j] = (bitx[j]%2);
				}

				if (bitx[i] != 0)
				{
					bitx[i]--;
					k += table[i];
				}
				else
				{
					for (ll j = static_cast<ll>(i); j < 63; j++)
					{

						if (bitx[j] >= 1)
						{
							ans += j - i;
							k += table[i];
							bitx[j]--;
							break;
						}
						else
						{
							bitx[j]++;
						}
					}
				}
			}
		}
	}
	return ans;
}

int main()
{
	table[0] = 1;
	
    for (int i = 1; i < table.size(); i++)
        table[i] = table[i-1]*2;
	
	int num;
	cin >> num;
	
    while (num--)
	{
		ll result = 0;
		result = solve();
		cout << result << endl;
	}
}