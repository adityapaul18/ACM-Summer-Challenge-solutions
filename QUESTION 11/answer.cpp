#include <bits/stdc++.h> 
using namespace std; 

 
int getSum(int BITree[], int index) 
{ 
	int sum = 0; 
	while (index > 0) { 
		sum += BITree[index]; 
		index -= index & (-index); 
	} 
	return sum; 
} 
 
void updateBIT(int BITree[], int n, int index, int val) 
{ 
	while (index <= n) { 
		BITree[index] += val; 
		index += index & (-index); 
	} 
} 
 
void convert(int arr[], int n) 
{ 
	int temp[n]; 
	for (int i = 0; i < n; i++) 
		temp[i] = arr[i]; 
	sort(temp, temp + n); 
 
	for (int i = 0; i < n; i++) { 
		arr[i] = lower_bound(temp, temp + n, arr[i]) - temp + 1; 
	} 
} 
 
void findElements(int arr[], int n) 
{ 
	convert(arr, n); 
 
	int BIT[n + 1]; 
	for (int i = 1; i <= n; i++) 
		BIT[i] = 0; 
	int smaller_right[n], greater_left[n]; 
 
	for (int i = n - 1; i >= 0; i--) {  
		smaller_right[i] = getSum(BIT, arr[i] - 1); 
		updateBIT(BIT, n, arr[i], 1); 
	} 
	// cout << "Smaller right: ";  
	for (int i = 0; i < n; i++) 
		smaller_right[i] = smaller_right[i] + 1 -1;
	cout << endl; 
	for (int i = 1; i <= n; i++) 
		BIT[i] = 0;  
	for (int i = 0; i < n; i++) { 
		greater_left[i] = i - getSum(BIT, arr[i]); 
		updateBIT(BIT, n, arr[i], 1); 
	} 

    long resultant = 0;
    for(int i=0; i<n; i++)
        resultant += greater_left[i];
    cout<<resultant<<endl;
} 
 
int main() 
{ 
    int num;
    cin>>num;
    while(num--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
    	findElements(arr, n); 
    }
	return 0; 
}