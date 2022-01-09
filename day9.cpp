class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int> mmap;
        vector<int> v;

        for (int i = 0; i < numbers.size(); i++)
        {
            if (mmap.find(target - numbers[i]) != mmap.end())
            {
                v.push_back(mmap[target-numbers[i]]);
                v.push_back(i + 1);
                return v;
            }
            else
                mmap[numbers[i]] = i+1;
        }
        
        return v;
    }
};
