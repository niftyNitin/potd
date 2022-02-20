// Problem link: https://practice.geeksforgeeks.org/problems/47e5aa3f32aee9e0405f04960f37c8a562d96a2f/1#

// s: O(N) t: O(N)
class Solution {
  public:
    void prank(long long a[], int n){
        // code here
        long long b[n];
        for(int i = 0; i < n; i++)
            b[i] = a[a[i]];
        
        for(int i = 0; i < n; i++)
            a[i] = b[i];
    }
};

// s:O(1) t: o(N)
class Solution {
  public:
    void prank(long long a[], int n){
        // code here
        if(n == 0) return;
        int temp = a[a[n-1]];
        prank(a, n-1);
        a[n-1] = temp;
    }
};