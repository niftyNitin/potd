// https://leetcode.com/problems/merge-sorted-array

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> v;
        int p = 0, q = 0;
        int flag = 0;
        
        if (m!= 0 and n!=0){
            
            for(int i = 0; i < m + n; i++) {
                if (nums1[p] <= nums2[q]){
                    v.push_back(nums1[p]);
                    if (p == m-1) {
                        flag = 1;
                        break;
                    }
                    p++;
                }
                else {
                    v.push_back(nums2[q]);
                    if (q == n-1){
                        flag = 2;
                        break;
                    }
                    q++;
                }
            }

            if (flag == 1)
            {
                for(int j = q; j < n; j++)
                    v.push_back(nums2[j]);
            }
            if (flag == 2)
            {
                for(int j = p; j < m; j++)
                    v.push_back(nums1[j]);
            }


            nums1 = v;
            
        }
        else if (m == 0 and n!= 0){
            nums1 = nums2;
        }
    }
};
