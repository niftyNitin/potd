// https://leetcode.com/problems/palindrome-number/

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        int n = x;
        long c = 0;
        while(x > 0){
            int r = x % 10;
            c *= 10;
            c += r;
            x /= 10;
        }
        
        if (c == n) return true;
        else    return false;
    }
};
