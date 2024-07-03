class Solution {
public:
    void rotate(vector<int>& nums, int k) 
    {
        //to rotate the array to left to one place
        /*
        int temp =nums[0];
        for(int i=1;i<nums.size();i++)
        {
            nums[i-1]=nums[i];
        }
        nums[nums.size()-1]=temp;
        */




        //to rotate the array to right to one place
        /*
        int temp =nums[nums.size()-1];
        for(int i=nums.size();i>1;i--)
        {
            nums[i]=nums[i-1];
        }
        nums[0]=temp;
        */


        //brute force approcah to left rotate the element by k places
        /*
        int l = numa.size();
        k=k%l;
        vector<int> vec;
        for (int i = k; i<l; i++)
        {
            vec.emplace_back(nums[i]);
        
        }
        
        for(int i =0; i<l-k; ++i)
        {
            vec.emplace_back(nums[i]);
            
        }
        for(int i =0; i<l; ++i)
        {
            nums[i]=vec[i];
        }
       

        */



        //brute force approcah to right rotate the element by k places
        /*
        int l = nums.size();
        k=k%l;
        vector<int> vec;
        for (int i = l-k; i<l; ++i)
        {
            vec.emplace_back(nums[i]);
        
        }
        
        for(int i =0; i<l-k; ++i)
        {
            vec.emplace_back(nums[i]);
            
        }
        for(int i =0; i<l; ++i)
        {
            nums[i]=vec[i];
        }
        */



        //optimized approach
        
        int n =nums.size();
        k = k%n;
       
       reverse(nums.begin() , nums.end());

       reverse(nums.begin() , nums.begin()+k);

       reverse(nums.begin()+k , nums.end());
       
    }
};