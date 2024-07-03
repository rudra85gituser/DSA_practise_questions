class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
/*brute force approach approach 1 in TC -o(n)
        int max =0;
        int ans =0;
        for(int i =0; i<nums.size(); i++)
        {
            if (max< nums[i])
            {
                max=nums[i];
            }
        }
        for(int i =0 ; i<=max; i++)
        {
            for(int j =0; j<nums.size();j++)
            {
            if(nums[j]==i)
            {
               continue;
            }
            }
            
        }
        return ans;
*/
/*brute force approach approach 2 in TC -o(n*n)
        int n = nums.size();
        
        for(int i=0;i<n;i++)
        {
            int flag =0
            for(int j=0;j<n-1;j++);
            {
                if(nums[j]==i)
                {
                    flag =1;
                    break;
                }
            }
            if(flag==0)
            {
                return i;
            }
        }
*/
/*better solution using hashing
        int n = nums.size();
        hash[n+1]={0};
        for(int i=0; i<n;i++)
        {
            hash[arr[i]]=1;
        }
        for(int i=0; i<n;i++)
        {
            hash[i]]==0;
            return i;
            break;
        }
// optimal approach 1 
        //using xor operation
        int n = nums.size();

        int xor1=0;
        int xor2=0;
         for(int i=0;i<n-1;i++)
        {
             xor2=xor2^arr[i];
             xor1=xor1^(i+1);
        }
        xor1=xor1^n;
        if(xor1^xor2!=0);
        {
            return xor1^xor2;
        }

        

// optimal approach 2 
        //addition of all natural number in given range 
        //addition of elements of arrey
        //ans = sum of natural - sum of array elemets
        
        int n = nums.size();
        int sum_natural = n * (n + 1) / 2;;
        int sum_array = 0;
        /*
        for(int i =0; i<nums.size(); i++)
        {
            sum_natural += i;
        }
        */
        for(int i =0; i<nums.size(); i++)
        {
            sum_array += nums[i];
        }
        return sum_natural - sum_array;
    }
};