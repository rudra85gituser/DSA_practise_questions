class Solution {
public:
    int binarysearch(vector<int>&arr,int size,int start,int end,int target){ 
        int s=start;
        int e=end;
        int  mid=s+(e-s)/2;
        while(s<=e){
            if(arr[mid]==target){
                return mid;
            }
            if(arr[mid]<target){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
             mid=s+(e-s)/2;
        }
        return -1;
    }
    int findpivot(vector<int>&nums,int size){
     int s=0;
     int e=size-1;
     int mid=s+(e-s)/2;
     while(s<=e){
         if(nums[mid]>nums[0]){
             s=mid+1;
         }
         else{
             e=mid;
         }
          mid=s+(e-s)/2;
     }
     return e;
    }
    int search(vector<int>& nums, int target) {
        int size=nums.size();
        int pivot=findpivot(nums,size);
        if(nums[0]<=target && target<=pivot){
            return binarysearch(nums,size,0,pivot-1,target);
        }
        else{
            return binarysearch(nums,size,pivot,size-1,target);
        }
    }
};

/* this will show TIME OVER */
/* another way */

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int size=nums.size();
        int s=0;
        int e=size-1;
        int mid=s+(e-s)/2;

        while(s<=e){
            if(nums[mid]==target){
                return mid;
            }

            if(nums[mid]>=nums[s]){
                if(target>=nums[s]&&target<=nums[mid])
                {
                    e=mid-1;
                }
                else{
                    s=mid+1;
                }
            }
            else{
                    if(target>=nums[mid]&&target<=nums[e])
                   {s=mid+1;} 
                   else{
                   e=mid-1;
                   }
                }
                 mid=s+(e-s)/2;
            }
            
             return -1;
        }
      
    
};