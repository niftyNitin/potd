// https://practice.geeksforgeeks.org/problems/n-digit-numbers-with-digits-in-increasing-order5903/1

// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    void printIncreasing(vector<int> &ans, int start, string &s, int n){
        if(s.length() == n){
            int x;
            x = stoi(s);
            ans.push_back(x);
            return;
        }
        if(n == 1)
            start = 0;
        for(int i = start; i <= 9; i++){
            string str =  s + to_string(i);
            printIncreasing(ans, i+1, str, n);
        }
    }

    vector<int> increasingNumbers(int N)
    {
        // Write Your Code here
        vector<int> ans;
        string s = "";
        printIncreasing(ans, 1, s, N);
        return ans;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        vector<int> ans = ob.increasingNumbers(N);
        for(auto num : ans){
            cout<< num <<" ";
        }
        cout<<endl;
        
    }
    return 0;
}  // } Driver Code Ends