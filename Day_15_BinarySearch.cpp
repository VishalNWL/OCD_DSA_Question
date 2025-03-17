Finding element in 2d matrix
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=0,col=matrix[0].size()-1;
        int m=matrix.size()-1,n=matrix[0].size()-1;
        while(row>=0 && row<=m && col>=0 && col<=n){
            if(matrix[row][col]==target){
                return true;
            }
            else if(matrix[row][col]>target){
                col=col-1;
            }
            else if(matrix[row][col]<target){
                row=row+1;
            }
        }

        return false;
    }
};

Approach:Starting from the top right corner since they are sorted from coloumn wise and row wise so we just move like that
Time Compleixty:O(rows+cols)
Space Complexity:O(1)

  
