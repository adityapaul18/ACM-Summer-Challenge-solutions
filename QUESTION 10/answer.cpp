
#include<bits/stdc++.h> 
using namespace std; 
  
int findItems(int arr[], int n, int temp) 
{ 
    int ans = 0; 
    for (int i = 0; i < n; i++) 
        ans += (temp/arr[i]); 
    return ans; 
} 
  

int binarysrch(int arr[], int n, int m, int high) 
{ 
    int low = 1; 
  
    while (low < high) 
    { 
        
        int mid = (low+high)>>1; 
  
        
        int itm = findItems(arr, n, mid); 
  
         
        if (itm < m) 
            low = mid+1; 
  
        else
            high = mid; 
    } 
  
    return high; 
} 
  
int minTime(int arr[], int n, int m) 
{ 
    int maxval = INT_MIN; 
   
    for (int i = 0; i < n; i++) 
        maxval = max(maxval, arr[i]); 
  
    return binarysrch(arr, n, m, maxval*m); 
} 
  
  

int main() 
{ 
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
       
    int n,m;
    cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++)
      cin>>arr[i];  
    
    cout << minTime(arr, n, m) <<"\n"; 
  
    return 0; 
}