// Question Link: https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/

// Approach 1 (Linear Search)
class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        if(n == 1)  return nums[0];
        else{
            bool flag = 0;
            for(int i = 0; i < n-1; i++){
                if(nums[i] > nums[i+1])
                    return nums[i+1];
            }
            return nums[0];
        }
    }
};

// Approach 2 (Binary Search)
class Solution {
public:

    int binSearch(vector<int>& a, int low, int high){
        int mid;
        while(low < high){
            mid = (low + high) >> 1;

            if (a[low] < a[high])
                return low;
            
            else if(a[mid] < a[low])  high = mid;
            else    low = mid + 1;
        }
        return low;
    }
    
    int findMin(vector<int>& nums) {
        int n = nums.size();
        if(n == 1)  return nums[0];
        int x = binSearch(nums, 0, n-1);
        return nums[x];
    }
};
