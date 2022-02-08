// https://leetcode.com/problems/find-pivot-index
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0, prefix = 0, n = nums.size();
        for(int i = 0; i < n; i++)
            sum += nums[i];
        
        for(int i = 0; i < n; i++)
        {
            sum -= nums[i];
            if(prefix == sum)
                return i;
            prefix += nums[i];
        }
        return -1;        
    }
};
