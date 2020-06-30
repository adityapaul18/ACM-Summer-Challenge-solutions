#include <bits/stdc++.h> 
#define lli long long int
using namespace std; 
int main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
	cin>>s; 
    
	s=s.append("}");

    stack<char> arr;       
    for(lli i=0;i<s.length()-1;i++)
    {
        int flag=0;
        for(lli j=i+1;j<s.length();j++)
		{
			if(s[j]<s[i])
			{
				flag=1;
				break;
			}
		}
        
		if(flag==0)
		{
            cout<<s[i]; 
            while(arr.size())
			{
                int flag1=0;
                for(lli j=i+1;j<s.length();j++)
                if(s[j]<arr.top())
				{
				        flag1=1;
				        break;
				}
		
		        if(flag1==0)
                cout<<arr.top();
                else
                break;        
                arr.pop();
			}
        }
        
		else
           arr.push(s[i]);
    }
    
     
}