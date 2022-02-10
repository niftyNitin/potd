// Problem link: https://practice.geeksforgeeks.org/problems/b6b3297ccfb1ad5f66a9c2b92979170417adf114/1#
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    
    public:
    int transfigure (string A, string B)
    {
    	// Your code goes here
    	int i = A.length()-1;
    	int j = B.length()-1;
    	if(i != j)  return -1;
    	
    	int x = A.length();
    	int checkSum = 0;
    	while(x--){
    	    checkSum += A[x];
    	    checkSum -= B[x];
    	}
    	if(checkSum != 0)   return -1;
    	
    	int c = 0;
    	while(i >= 0 and j >= 0){
    	    if(A[i] == B[j])    i--, j--;
    	    else    i--, c++;
    	}
    	
    	return c;
    }
};

// { Driver Code Starts.


int main () 
{
    int t; cin >> t;
    while (t--)
    {
        string A, B; 
        cin >> A >> B;
        Solution obj;
        cout << obj.transfigure (A, B) << endl;
    }
}  // } Driver Code Ends
