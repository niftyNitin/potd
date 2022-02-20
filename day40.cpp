// Problem link: https://leetcode.com/problems/keep-multiplying-found-values-by-two/

class Solution {
public:
    
    int binSearch(int start, int end, vector<int>& nums, int original){
        int mid;
        while(start <= end){
            mid = (start+end)>>1;
            if(nums[mid] == original)   return mid;
            else if(nums[mid] < original)   start = mid+1;
            else    end = mid-1;
        }
        return -1;
    }
    
    int findFinalValue(vector<int>& nums, int original) {
        sort(nums.begin(), nums.end());
        int start = 0, last = nums.size()-1;
        while(true){
            int x = binSearch(start, last, nums, original);
            if(x == -1) return original;
            original *= 2;
            start = x+1;
        }
    }
};