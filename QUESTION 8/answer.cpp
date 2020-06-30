#include<bits/stdc++.h>
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
        string s;
        cin>>s;
        int brr[500][2],j=0,p=0,flag=1;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='/')
            {
                if(s[i+1]=='/'){
                i++;
                flag=1;
                continue;}
                else
                {
                    if(flag==0){
                    brr[j][0]=p+1;
                    brr[j][1]=i-1;j++;}
                    p=i;                    
                    flag=0;                    
                }
            }
            
        }

        if(j==0)
        {
            cout<<"0\n";
        }
        
        else
        {
            cout<<j<<"\n";
            for(int i=0;i<j;i++)
            {
                for(int m=brr[i][0];m<=brr[i][1];m++)
                cout<<s[m];
                cout<<"\n";
            }
        }
    }
}