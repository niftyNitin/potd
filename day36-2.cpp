// Problem Link: https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1


// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){

        // Your code here
        int max_ending = 0;
        int max_sofar = INT_MIN;
        for(int i = 0; i < n; i++){
            max_ending += arr[i];
            if(max_sofar < max_ending)
                max_sofar = max_ending;
            if(max_ending < 0)
                max_ending = 0;
        }
        return max_sofar;
    }
};

// { Driver Code Starts.

int main()
{
    int t,n;

    cin>>t; //input testcases
    while(t--) //while testcases exist
    {

        cin>>n; //input size of array

        int a[n];

        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array

        Solution ob;

        cout << ob.maxSubarraySum(a, n) << endl;
    }
}

