#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;
    string s;
    stack <char> st;
    while(t--)
    {
        cin>>s;
        int flag=0;
        if(s[s.length() - 1] != '}' || s[0] != '{')
            flag=1;

        else
        {
           for(long int i=0;i<s.length();i++)
           {
                if(s[i]=='{'||s[i]=='1')
                st.push(s[i]);
                else
                {
                    if(st.size()==0)
                    {
                        flag=1;
                        break;
                    }

                    st.pop();
            
                    if(st.top()!='{')
                    {
                        flag=1;
                        break;
                    }
                    st.pop();
                }
           }   
        
        }
        
        if(flag==0)
        cout<<"Yes\n";
        else
        cout<<"No\n";
    
    }
}