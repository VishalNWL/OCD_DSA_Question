//searching in array and if not found then returning their position where it supposed to be
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int s=0;
        int e=nums.size()-1;
        int mid=0;

        while(s<e){
               mid=(s+e)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]>target){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        if(nums[s]>=target){
            return s;
        }
        return s+1;
    }
    
};

Approach: In simple binary search if element not found s and e will point to same location so we can use that postion
Time complexity:O(N)
Space Complexity:O(1)
