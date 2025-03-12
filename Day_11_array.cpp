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

//Pascal's triangle
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        
        ans.push_back({1});
        if(numRows==1){
           return ans;
        }

        ans.push_back({1,1});
        if(numRows==2){
            return ans;
        }
      
       vector<int>output;
       for(int i=2;i<numRows;i++){
        for(int j=0;j<=i;j++){
            if(j==0||j==i){
                output.push_back(1);
            }
            else{
                output.push_back(ans[i-1][j-1]+ans[i-1][j]);
            }
        }
        ans.push_back(output);
        output.clear();
       }
     return ans;
    }
};

approach:using property of pascal's triangle after storing the first and the second line
Time complexity: O(N^2)
Space complexity: O(N^2)

//Problem of the day minimum cost to climb stair
  class Solution {
  public:
   int solve(vector<int>&cost,int n,vector<int>&dp){
       if(n==0){
           return cost[0];
       }
       if(n==1){
           return cost[1];
       }
       
       if(dp[n]!=-1){
           return dp[n];
       }
       
       dp[n]=min(solve(cost,n-1,dp),solve(cost,n-2,dp))+cost[n];
       return dp[n];
   }
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int>dp(cost.size(),-1);
        int mincost=min(solve(cost,cost.size()-1,dp),solve(cost,cost.size()-2,dp));
        return mincost;
    }
};

Approach: using dp to store minimum cost of already visited stairs and then using recursion to get min cost of current stair and adding cost of current stair so that 
we can move on further stairs

Time Complexity: O(N)
Space Complexity:O(N)

//maximum count of +ve and -ve intiger using binary search
  class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int negative=-1;
        int s=0,e=nums.size()-1;
        while(s<=e){
            int mid=(s+e)/2;
            if(nums[mid]<0){
                negative=mid;
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }

    if(negative+1>=nums.size()){
        return negative+1;
    }

    int positive=negative+1;
     while(nums[positive]==0){
        if(positive+1>=nums.size()){
            positive=nums.size();
            break;
        }
        positive++;
     }

//here size is added and subtracted becoz it is not working without this
     return max(nums.size()+negative+1-nums.size(),nums.size()-positive);
     
    }
};

Approach: usng binary search to find first negative and then use this to find positive element
Time complexity:O(N)
Space complexity:O(1)
