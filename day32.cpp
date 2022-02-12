// https://leetcode.com/problems/find-words-that-can-be-formed-by-characters/

class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char, int> mp;
        for(auto i : chars)
            mp[i]++;

        int n = words.size();
        int sum = 0;
        for(int i = 0; i < n; i++){
            unordered_map<char, int> fr;
            bool flag = 0;
            string s = words[i];
            for(auto j : s){
                fr[j]++;
                if(fr[j] > mp[j])
                {
                    flag = 1;
                    break;
                }
            }
            if(!flag) sum += s.length();

        }
        return sum;
    }
};
