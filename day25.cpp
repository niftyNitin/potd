// https://leetcode.com/problems/length-of-last-word/

class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.length();
        bool nonspace = 0;
        int len = 0;
        for(int i = n-1; i >= 0; i--){
            if(s[i] != ' ')
                nonspace = 1;
            if(s[i] == ' ' and nonspace)
                break;
            if(s[i] == ' ' and !nonspace)
                continue;
            len++;
        }
        return len;
    }
};
