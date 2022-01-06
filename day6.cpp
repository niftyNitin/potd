class Solution
{
public:
    int findPeakElement(vector<int> &nums)
    {
        int hi = nums.size() - 1;
        int lo = 0;
        int mid = lo + (hi - lo) / 2;
        if (nums.size() == 1)
            return 0;
        while (hi >= lo)
        {
            mid = lo + (hi - lo) / 2;
            if (mid + 1 < nums.size() and mid > 0)
            {
                if (nums[mid] > nums[mid + 1] and nums[mid] > nums[mid - 1])
                {
                    return mid;
                }
                else if (nums[mid] < nums[mid + 1])
                    lo = mid + 1;
                else
                    hi = mid - 1;
            }
            else
                break;
        }
        if (mid == 0 and nums[mid + 1] > nums[mid])
            return mid + 1;
        else if (mid == 0)
            return 0;
        if (mid == nums.size() - 1 and nums[mid - 1] > nums[mid])
            return mid - 1;
        else
            return nums.size() - 1;
    }
};
