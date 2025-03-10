class Solution {
    public:
        void moveZeroes(vector<int>& nums) {
            int pt1=0,pt2=1;
            if(nums.size()<=1){
                return;
            }
            for(int i=0;i<nums.size()-1;i++){
                if(nums[pt2]!=0 && nums[pt1]==0){
                     swap(nums[pt1],nums[pt2]);
                     pt1++;
                     pt2++;
                }
                else if(nums[pt2]==0 && nums[pt1]==0){
                    pt2++;
                }
    
                else{
                    pt1++;
                    pt2++;
                }
            }
        }
approach:using two pointers first will point at zero number and other will find a non zero element and then we will swap them
Time Complexity: O(n)
Space Complexity:O(1)
    };


    };

    git init
git add README.md
git commit -m "first commit"
git branch -M main
git remote add origin https://github.com/VishalNWL/DSAPracticeopencode.git
git push -u origin main