// Problem Link: https://leetcode.com/problems/group-anagrams/

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> stt = strs;
        unordered_map<string, vector<int>> mp;
        vector<vector<string>> vs;
        for(int i = 0; i < strs.size(); i++){
            sort(strs[i].begin(), strs[i].end());
            mp[strs[i]].push_back(i);
        }

        for(auto m : mp){
            vector<string> v;
            for(auto j : m.second)
                v.push_back(stt[j]);
            vs.push_back(v);
        }
        return vs;
    }
};
