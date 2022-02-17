// Problem Link: https://leetcode.com/problems/set-matrix-zeroes/

// Brute force : S:O(N), T:O(mn)
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int, int>> vp;
        int r = matrix.size();
        int c = matrix[0].size();
        for(int i = 0; i < r; i++)
            for(int j = 0; j < c; j++)
                if(matrix[i][j] == 0)   vp.push_back(make_pair(i, j));
        
        for(auto x : vp){
            for(int i = 0; i < r; i++)
                matrix[i][x.second] = 0;
            for(int i = 0; i < c; i++)
                matrix[x.first][i] = 0;
        }
    }
};

// s: o(n) approach using sets
void setZeroes(vector<vector<int>>& matrix) {
    int m=matrix.size(),n=matrix[0].size();
    unordered_set<int> row,col;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(matrix[i][j] == 0)
                row.insert(i) , col.insert(j);                           
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(row.count(i)>0 || col.count(j)>0) matrix[i][j] = 0;
        }
    }        
}