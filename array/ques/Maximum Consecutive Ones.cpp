class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
 /*methos 1 using arrey
         int count= 0,ans =0;
         int arr[nums.size()];
        for(int i=0; i< nums.size(); i++)
        {
            if(nums[i]==1)
            {
                count ++;
                arr[i] = count;
            }
            else
            {
                count = 0;
                arr[i]=0;
            }
        }
        for(int i=0; i<nums.size(); i++)
        {
            if (ans<arr[i])
            {
                ans = arr[i];
            }
        }
        return ans;
*/
int count= 0,ans =0;
        
        for(int i=0; i< nums.size(); i++)
        {
            if(nums[i]==1)
            {
                count ++;
                if(ans<count)
                {
                    ans = count;
                }
            }
            else
            {
                count = 0;
               
            }
        }
       
        return ans;
    }
};