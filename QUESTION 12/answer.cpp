#include <bits/stdc++.h> 
using namespace std; 

// Function to calculate Fibonacci Terms 
void calcFiboTerms(vector<int>& fiboTerms, int K) 
{ 
	int i = 3, nextTerm; 
	fiboTerms.push_back(0); 
	fiboTerms.push_back(1); 
	fiboTerms.push_back(1); 
	
	// Calculate all Fibonacci terms 
	// which are less than or equal to K. 
	while (1) { 
		nextTerm = fiboTerms[i - 1] + fiboTerms[i - 2]; 

		// If next term is greater than K 
		// do not push it in vector and return. 
		if (nextTerm > K) 
			return; 

		fiboTerms.push_back(nextTerm); 
		i++; 
	} 
} 

// Function to find the minimum number of 
// Fibonacci terms having sum equal to K. 
int findMinTerms(int K) 
{ 

	// Vector to store Fibonacci terms. 
	vector<int> fiboTerms; 

	calcFiboTerms(fiboTerms, K); 

	int count = 0, j = fiboTerms.size() - 1; 

	// Subtract Fibonacci terms from sum K 
	// until sum > 0. 
	while (K > 0) { 
		
		// Divide sum K by j-th Fibonacci term to find 
		// how many terms it contribute in sum. 
		count += (K / fiboTerms[j]); 
		K %= (fiboTerms[j]); 

		j--; 
	} 

	return count; 
} 

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;
    while(n--)
    {
        int a;
        cin>>a;
        cout << findMinTerms(a)<<"\n"; 
    }
    return 0;
}

