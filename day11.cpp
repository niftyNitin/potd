// https://leetcode.com/problems/find-smallest-letter-greater-than-target

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n = letters.size();
        if (letters[n-1] <= target)
            return letters[0];
        
        int low = 0, high = n-1;
        int ans = high;
        int mid;
        while(low <= high){
            mid = (low + high) >> 1;
            if(letters[mid] <= target)
                low = mid + 1;
            else
            {
                high = mid - 1;
                ans = mid;
            }
        }
        return letters[ans];
    }
};
