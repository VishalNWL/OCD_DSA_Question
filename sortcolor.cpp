class Solution {
public:
    void sortColors(vector<int>& nums) {
        int red=0;
        int white=0;
        int blue=0;

        for(int i=0;i<nums.size();i++){
               if(nums[i]==0){
                red++;
               }
               else if(nums[i]==1){
                  white++;
               }
               else{
                  blue++;
               }
        }
        int i=0;
       while(red||white||blue){
          if(red){
            nums[i]=0;
            red--;
            i++;
          }

          else if(white){
            nums[i]=1;
            white--;
            i++;
          }
          else if(blue){
            nums[i]=2;
            blue--;
            i++;
          }
       }


    }
};
