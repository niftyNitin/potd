// https://practice.geeksforgeeks.org/problems/a-guy-with-a-mental-problem1604/1

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
	long long minTime(long long a[], long long b[], long long n)
	{
		// Your code goes here
		long long suma = 0, sumb = 0;
		long long i;
		for (i = 0; i < n; i++) {
			if (i % 2 == 0) {
				suma += a[i];
				sumb += b[i];
			}
			else {
				suma += b[i];
				sumb += a[i];
			}
		}
		return suma > sumb ? sumb : suma;
	}
};

// { Driver Code Starts.
int main() {
	long long t;
	cin >> t;
	while (t--)
	{
		long long n;
		cin >> n;
		long long a[n], b[n];
		for (long long i = 0; i < n; i++)
			cin >> a[i];
		for (long long i = 0; i < n; i++)
			cin >> b[i];
		Solution ob;
		cout << ob.minTime(a, b, n) << endl;
	}
	return 0;
}
// } Driver Code Ends
