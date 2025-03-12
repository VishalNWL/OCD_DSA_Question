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
Time complexity:O(log(n))
Space Complexity:O(1)

//First and last occurance
    class Solution {
  public:
    vector<int> find(vector<int>& arr, int x) {
        int s=0,e=arr.size()-1;
        int first=-1,last=-1,mid;
        
        while(s<=e){
            mid=(s+e)/2;
            
            if(arr[mid]==x){
                first=mid;
                e=mid-1;
            }
            else if(arr[mid]<x){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        
        
        s=0,e=arr.size()-1;
        while(s<=e){
            mid=(s+e)/2;
            
            if(arr[mid]==x){
                last=mid;
                s=mid+1;
            }
            else if(arr[mid]<x){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        
        vector<int>ans;
        ans.push_back(first);
        ans.push_back(last);
        return ans;
        
    }
};

Time compleixty:O(log(n))
Space complexity:O(1)
