// Ceil and floor in an array
pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	int s=0,e=n-1,c=-1,d=-1;
	while(s<e){
		int mid=(s+e)/2;
		if(a[mid]==x){
			c=a[mid];
			break;
		}
		else if(a[mid]<x){
			c=a[mid];
			s=mid+1;
		}
		else {
			e=mid;
		}
	}
	if(s==n-1){
		c=(a[s]<=x)?a[s]:-1;
	}
	if(e==0){
		c=(a[e]<=x)?a[e]:-1;
	}

 s=0,e=n-1;
 while(s<e){
		int mid=(s+e)/2;
		if(a[mid]==x){
			d=a[mid];
			break;
		}
		else if(a[mid]>x){
			d=a[mid];
			e=mid;
		}
		else {
			s=mid+1;
		}
	}
   if(s==n-1){
		d=(a[s]>=x)?a[s]:-1;
	}
	if(e==0){
		d=(a[e]>=x)?a[e]:-1;
	}

  if(n==1){
	  if(x>=a[0]){
		  c=a[0];
	  }
	  if(x<=a[0]){
		  d=a[0];
	  }
  }
  return make_pair(c,d);
}


Approach:Simple binary search just take care of boundary conditions


//FInd maximum in sorted rotated array
class Solution {
public:
    int findMin(vector<int>& nums) {
        int s=0,e=nums.size()-1;
        int ans=0;
        if(nums[0]<=nums[e]){
            return nums[0];
        }
        while(s<e){
            int mid=(s+e)/2;
            if(nums[mid]>=nums[0]){
                s=mid+1;
            }
            else if(nums[mid]<=nums[nums.size()-1]){
                e=mid;
            }
        }

        return nums[s];
    }
};

Appeoch:using binary search with the condistion of rotated array

//search in rotated sorted array
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s=0;
        int e=nums.size()-1;
        int mid;
        int pivot=0;

    
    while(s<=e){
        mid=(s+e)/2;
        if(nums[mid]>=nums[0] && nums[mid]>nums[pivot])
        {
            s=mid;
            pivot=mid;
        }
        else if(nums[mid]<nums[0]){
            e=mid-1;
        }
        else{
           s=mid+1;
        }
    }
cout<<pivot;
    s=0;
   
   if(target>=nums[0] && pivot!=nums.size()-1){
      e=pivot;
      while(s<=e){
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
   }

   else if(target<nums[0] && pivot!=nums.size()-1){
       s=pivot+1;
       e=nums.size()-1;

      while(s<=e){
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
   }

   else{
     s=0;
     e=nums.size()-1;
     while(s<=e){
        mid=(s+e)/2;
        if(nums[mid]==target){
            return mid;
        }
        else if(nums[mid]<target){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
     }
   }
    
    return -1; 
 }
};

Approach:First find pivot element then check if target is in left or right of the pivot and then apply binary search


Time Complexity :O(N)
Space Complexity:O(1)
