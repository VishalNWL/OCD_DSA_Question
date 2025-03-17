koko eating bananas
class Solution {
public:

  bool ispossible(vector<int>& piles, int h,int mid){
      int hoursSpent = 0;
    for (int i = 0; i < piles.size(); i++) {
        hoursSpent += (piles[i] + mid - 1) / mid; // Equivalent to ceil(piles[i] / mid)
    }
    return hoursSpent <= h;
  }
    int minEatingSpeed(vector<int>& piles, int h) {
        int s=0,ans=0;
        int e=INT_MIN;
        for(int i=0;i<piles.size();i++){
            if(e<piles[i]){
                e=piles[i];
            }
        }

        while(s<=e){
            int mid=(s+e)/2;
            if(ispossible(piles,h,mid)){
               ans=mid;
               e=mid-1;
            }
            else{
                s=mid+1;
            }
        }

        return ans;
    }
};

Approach:Min banana can eat is 1 and max is max element in the array so apply binary search in this range and then check if mid is a possible no. or not by taking ceil of banana with mid and then doing it for every pile and adding them then at end 
we added to hour var then at end we checked if hour<=h or not


