//https://leetcode.com/problems/all-divisions-with-the-highest-score-of-a-binary-array/


class Solution {
public:
    vector<int> maxScoreIndices(vector<int> &nums)
    {
        int tot = accumulate(nums.begin(), nums.end(), 0);
        int left_sum = 0;
        int right_sum = tot;
        int max_sum = left_sum + right_sum;
        vector<int> indices{0};
        for (int idx = 0; idx < nums.size(); ++idx)
        {
            int cur_val = nums[idx];
            if (cur_val == 0)
                ++left_sum;
            else
                --right_sum;

            int cur_sum = left_sum + right_sum;
            if (cur_sum > max_sum)
            {
                max_sum = cur_sum;
                indices = std::vector<int>{idx + 1};
            }
            else if (cur_sum == max_sum)
            {
                indices.push_back(idx + 1);
            }
        }
        return indices;
    }
};
