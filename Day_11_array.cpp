//spiral traversal of matrix

class Solution {
public:
  void solve(vector<vector<int>>& matrix,vector<int>&ans,int a1,int a2,int m,int n){
    
    if(a1>=n||a2>=m){
        return;
    }
    
    for(int i=a2;i<=m-1;i++){
        ans.push_back(matrix[a1][i]);
    }
   
    for(int i=a1+1;i<=n-1;i++){
        ans.push_back(matrix[i][m-1]);
    }

     // Traverse Left (only if there are multiple rows left)
    if (n - 1 > a1) {
        for (int i = m - 2; i >= a2; i--) {
            ans.push_back(matrix[n - 1][i]);
        }
    }

    // Traverse Up (only if there are multiple columns left)
    if (m - 1 > a2) {
        for (int i = n - 2; i > a1; i--) {
            ans.push_back(matrix[i][a2]);
        }
    }

    solve(matrix,ans,a1+1,a2+1,m-1,n-1);

  }

    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
       solve(matrix,ans,0,0,matrix[0].size(),matrix.size());
       return ans;
    }
};


Approach:storing the starting point then use process outer boundary then went inside by again changing starting point 
Time complexity: O(N^2)
Space complexity:O(N^2)

//Rotate an image by 90deg clockwise
  class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        for(int i=0;i<matrix.size();i++){
            for(int j=i;j<matrix[0].size();j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }

        for(int i=0;i<matrix.size();i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};

Approach:first transpose then reverse each row
Time complexity:O(N^2)
Space complexity:O(1);


