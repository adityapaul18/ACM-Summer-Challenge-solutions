#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int num;
    cin>>num;
    while(num--)
    {
        int n;
        cin>>n;
       
        string str[n];
        int frq[n][26] = {0};
       
        for(int i=0; i<n; i++)
        {
            cin>>str[i];
            for(int j=0; j<str[i].length(); j++)
                frq[i][str[i][j]-'a']++;
        }
       
        int max = 0;
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                bool flag = true;
                
                for(int k=0; k<26; k++)
                {
                    if(frq[i][k] != 0 && frq[j][k] != 0)
                    {
                        flag = false;
                        break;
                    }            
                }
                    
                if(flag == true)
                {
                    int val = str[i].length()*str[j].length();
                    if(val > max)
                        max = val;
                }
            }
        }
        cout<<max<<endl;
    }
}
    