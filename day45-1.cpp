// https://practice.geeksforgeeks.org/problems/1s-complement2819/1#

// { Driver Code Starts
 
#include<bits/stdc++.h>
using namespace std; 

 // } Driver Code Ends
  
class Solution{ 
public:
    string onesComplement(string S,int N){
        //code here
        string str = S;
        for(int i = 0; i < N; i++){
            if(S[i] == '0') str[i] = '1';
            else    str[i] = '0';
        }
        return str;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.onesComplement(s,n)<<"\n";
    }
}  // } Driver Code Ends