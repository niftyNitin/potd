// https://leetcode.com/problems/valid-anagram/

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> mp;
        if(s.length() != t.length())    return false;
        for(auto i : s)
            mp[i]++;

        for(auto i : t)
            if(mp[i] > 0)
                mp[i]--;
            else
                return false;

        return true;
    }
};
