class Solution {
public:

/* use 3 pointer approch where i and j start from front and k starts from last */ 
    vector<vector<int>> threeSum(vector<int>& nums) {
       set<vector<int>>s;
       vector<vector<int>>output;
       sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n;i++){
           int j=i+1;
           int k=n-1;
           while(j<k){
               if(nums[i]+nums[j]+nums[k]==0){
                /* insert tripet */
                   s.insert({nums[i],nums[j],nums[k]});
                   j++;
                   k--;
               }
               else if(nums[i]+nums[j]+nums[k]<0){
                   j++;
               }
               else{
                   k--;
               }
           }
        }
        /* important */
for(auto triplets:s)
output.push_back(triplets);
    
      return output;
    } 
};