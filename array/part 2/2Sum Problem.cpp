class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
       //brute force 
       /*
       int n=nums.size();
       vector<int> index;
       for(int i=0;i<n;i++)
       {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                continue;
            }
            if(nums[i]+nums[j] == target)
            {
                index.emplace_back(i);
                index.emplace_back(j);
                return index;
            }
           
        }
       }
       return index;
       */


       //better approach of brute force 
       /*
       int n=nums.size();
       vector<int> index;
       for(int i=0;i<n;i++)
       {
        for(int j=i+1;j<n;j++)
        {
            
            if(nums[i]+nums[j] == target)
            {
                index.emplace_back(i);
                index.emplace_back(j);
                return index;
            }
           
        }
       }
       return index;
       */




       //better solution using hashmap
       //map<sum , index> m;
       // to find and return the index , hashmap is only the option 
       map<int , int> m;
       vector<int> index;
       int n=nums.size();
       for(int i=0;i<n;i++)
       {
         int sum =nums[i];
         int more =target-sum;
         if(m.find(more) != m.end())
         {
           index.emplace_back(i);
           index.emplace_back(m[more]);
           return index;
         }
           m[sum] =i;
       }
       return index;

    //optimal solution if we have to return boolean value
    /*
     int left =0;
     int right =n-1;
     sort(nums.begin() ,nums.end())
     while(left < right)
     {
        int sum =nums[left]+nums[right];
        if(sum == target)
        {
            return true;
        }
        else if(sum<target)
        {
            left++;
        }
        else
        {
            right++;
        }
     }
    */
    }

    
};