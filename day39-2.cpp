class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int r = matrix.size();
        int c = matrix[0].size();
        vector<int> v;
        int left = 0, right = c-1, up = 0, down = r-1, direction = 0;
        while((left <= right) and (up <= down)){
            if(direction == 0){
                for(int i = left; i <= right; i++)
                    v.emplace_back(matrix[up][i]);
                up++;
            }
                    
            if(direction == 1){
                for(int i = up; i <= down; i++)
                    v.emplace_back(matrix[i][right]);
                right--;
            }
                
            if(direction == 2){
                for(int i = right; i >= left; i--)
                    v.emplace_back(matrix[down][i]);
                down--;
            }
                
            if(direction == 3){
                for(int i = down; i >= up; i--)
                    v.emplace_back(matrix[i][left]);
                left++;
            }
            
            direction = (direction + 1) % 4;
        }
        return v;
    }
};