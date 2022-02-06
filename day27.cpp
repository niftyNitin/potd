// https://leetcode.com/problems/boats-to-save-people

class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n = people.size();
        int count = 0;
        sort(people.begin(), people.end());
        int b = 0, e = n-1;
        while(b <= e){
            if(people[b] + people[e] <= limit){
                b++;
                e--;
            }
            else{
                e--;
            }
            count++;
        }
        return count;
    }
};
