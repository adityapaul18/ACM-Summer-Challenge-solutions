// geeks for geekd helped
#include<bits/stdc++.h>

using namespace std;
    unsigned long long int Manacher(string s) {
        const char kNullChar = '\0';
        string str = string(1, kNullChar);

        for(auto c: s) str += string(1, c) + kNullChar;

        string max_str = "";
        long int len = str.size();
        long int right = 0;
        long int center = 0;
        vector<long int> dp(len, 0);

        for(long int i = 1; i < len; i++) {
            long int mirr = 2*center - i;            
            if(i < right) {
                dp[i] = min(right - i, dp[mirr]);
            }    
            long int left_index = i - (1 + dp[i]);
            long int right_index = i + (1 + dp[i]);
            while(left_index != -1 && right_index != len && str[left_index] == str[right_index]) {
                left_index--;
                right_index++;
                dp[i]++;
            }    
            if(i + dp[i] > right) {
                center = i;
                right = i + dp[i];
            }
        }
        
        unsigned long long int count = 0;
        for(long int i = 0; i < len; i++) {
            count += ceil((double)dp[i]/2.0);
        }
        return count;
    }
int main()
{
    long int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        unsigned long long int ans=Manacher(s);
        cout<<ans<<"\n";
    }
}