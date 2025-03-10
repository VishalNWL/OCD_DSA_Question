class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int sum;
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            sum = nums[i];
            for (int j = i + 1; j < nums.size(); j++) {
                sum = sum + nums[j];
                if (sum == target) {
                    ans.push_back(i);
                    ans.push_back(j);
                    break;
                }
                sum = nums[i];
            }
            if (sum == target) {
                break;
            }
        }

    
        return ans;
    }
};
