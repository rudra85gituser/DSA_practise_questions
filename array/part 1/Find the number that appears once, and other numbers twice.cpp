class Solution {
public:
    int singleNumber(vector<int>& nums) {


/*brute force methos 1
//first sort the array
//condition 1-check if the two consecutive elements are same then skip those elements by two 
//condition 2-if there is only one element then make a condition that if(i== arr.size()-1)

for(int i = 1; i<=nums.size()-1; i++)
{
    int j = i;
    while(j>0 && nums[j] < nums[j-1])
    {
        int temp = nums[j];
        nums[j]=nums[j-1];
        nums[j-1]=temp;
        j--;
    }
}
        for(int i =0; i<nums.size(); i=i+2)
        {
            if(i == nums.size()-1 ||nums[i] != nums[i+1] )
            {
                return nums[i];
            }

        }
        return -1;
    */
    /* brute force method 2
    int  count =0;
    int num=0;
    for(int i=0;i<n;i++)
    {
        num=nums[i]
        for(int i=j;i<n;i++)
        {
            if(nums[j]==num)
            {
                count++;
            }
            if(count==1)
            {
                return num;
            }
        }
    }
    */
//better solution using hashing method 1
/*
    int maxi =0;
    for(int i=0;i<nums.size();i++)
    {
          maxi = max(maxi,nums[i]);
    }
    int hash[maxi]={0};
    for(int i=0;i<nums.size();i++)
    {
          hash[nums[i]]++;
    }
    for(int i=0;i<nums.size();i++)
    {
          if(hash[i]==1);
           return nums[i];
           break;
    }
*/
//better solution using map data structure method 2
/*
    map<long long , int> m;
    for(int i=0;i<nums.size();i++)
    {
         m[nums[i]]++;
    }
    for(auto it: m)
    {
        if(it.second==1)
        {
            return it.first
        }
    }
*/


 

//optimal solution using xor operation 
    int ans =0;
      for(int i =0; i<nums.size(); i++)
      {
        ans = ans ^ nums[i];
      }
      return ans;
    }

};