//https://leetcode.com/problems/substrings-of-size-three-with-distinct-characters/submissions/

class Solution {
public:
    int countGoodSubstrings(string s) {
        int n = s.length();
        int count = 0;
        char a = s[0], b = s[1], c;
        for (int i = 2; i < n; i++)
        {
            c = s[i];
            if(a != b and b != c and a!= c)
                count++;
            
            a = b;
            b = c;
        }
        return count;
    }
};
