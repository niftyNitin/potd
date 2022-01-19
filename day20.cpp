// https://leetcode.com/problems/sort-integers-by-the-number-of-1-bits/submissions/

class Solution {
public:
    int bitset[10001];
    
    void initialize(){
        bitset[0] = 0;
        
        for(int i = 0; i <= 10000; i++)
        {
            bitset[i] = (i & 1) + bitset[i / 2];      
        }
    }
    
    vector<int> sortByBits(vector<int>& arr) {
        initialize();
        vector<int> v;
        vector<int> m[14];
        for(auto i : arr){
            m[bitset[i]].push_back(i);
        }
        
        for(int i = 0; i < 14; i++){
            sort(m[i].begin(), m[i].end());
            for(auto j : m[i])
                v.push_back(j);
        }
        
        return v;
    }
};
