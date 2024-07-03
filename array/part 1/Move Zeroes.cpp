class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        //brute force approach using temperory array
        /*
        int i =0;
        temp[i];
        int l = nums.size();
        for(int j =0;j<l;j++)
        {
            if(nums[i]!=0)
            { 
                temp[i]=nums[j];
                i++;
            }
        }
        for(int j=0;j<i;j++)
        {
            nums[j]=tmep[j];
        }
        for(int j=i;j<l;j++)
        {
            nums[j]=0;
        }
        */


        //brute force approach without using temperory array
        /*
        int count =0;
        int l = nums.size();
        for(int i =0; i<l ;i++)
        {
            if(nums[i] != 0)
            {
                nums[count]=nums[i];
                count++;
            }
            
        }
        for(int i =count; i<l; i++)
        {
            nums[i]=0;
        }
        */
        
        //better approach
        /*
        int len = nums.size();
        for(int i =0; i<len; i++)
        {
            if(nums[i]==0)
            {
            for(int j =i; j<len; j++)
            {
                nums[j] = nums[j+1];
                nums[len-1]=0;
            }
            }
        }
        */


      
        



        //optimal approach
        int n =nums.size();
        int j =-1;//if j remains -1 then there is no o element
        for(int i=0;i<n;i++)
        {
            if (nums[i]==0)
            {
                j=i;
                break;
            }
        }
       
        for(int i=j+1;i<n;i++)
        {
            if(nums[i]!=0)
            {
                swap(nums[i],nums[j]);
                j++;
            }
        }
       

    }
};