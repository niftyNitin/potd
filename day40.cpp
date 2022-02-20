// Problem link: https://leetcode.com/problems/keep-multiplying-found-values-by-two/

// using binary search o(n^2logn)
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

// o(nlogn) solution
class Solution {
public: 
    int findFinalValue(vector<int>& nums, int original) {
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == original){
                original *= 2;
                i -= 1;
            }
        }
        return original;
    }
};


// o(n) solution using hashset
class Solution {
public: 
    int findFinalValue(vector<int>& nums, int original) {
        unordered_set<int> st;
        for(auto i : nums)
            st.insert(i);
        
        while(true){
            if(st.count(original))
                original *= 2;
            else
                break;
        }
        return original;
    }
};