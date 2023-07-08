/*
Given an m x n integer matrix 'matrix', if an element is 0, set its entire row and column to 0's.
It would be best if you did it in place.
*/

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows=matrix.size();
        int col=matrix[0].size();
        unordered_map<int, int> rowmap;
        unordered_map<int, int> colmap;
        for (int i=0; i<rows; i++){
            for (int j=0; j<col; j++){
                if (matrix[i][j]==0){
                    rowmap[i]=1;
                    colmap[j]=1;
                }
            }
        }
        for (int i=0; i<rows; i++){
            if (rowmap.count(i)>0){
                for (int x=0; x<col; x++){
                    matrix[i][x]=0;
                }
            }
        }
        for (int i=0; i<col; i++){
            if (colmap.count(i)>0){
                for (int x=0; x<rows; x++){
                    matrix[x][i]=0;
                }
            }
        }
    }
};
