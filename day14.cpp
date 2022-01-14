// https://leetcode.com/problems/sqrtx

class Solution {
public:
    int mySqrt(int x) {
        long long int i = 0;
        while(i*i <= x){
            i++;
        }
        return i-1;
    }
};
