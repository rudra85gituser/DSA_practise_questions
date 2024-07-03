class Solution {
public:
    void sortColors(vector<int>& nums)
    {
//brute force approach is sorting which is inplace
//quick sort is in place sorting


//better solution can be 3 counters for counting number of ouccerences of each color
//run an individual loopn for each counter and initialize each color/numebr one by one
/*
int cnt1=0;
int cnt2=0;
int cnt3=0;
int n =nums.size();
for(int i=0;i<n;i++)
{
    if(nums[i]==0)
    {
        cnt1++;
    }
    else if(nums[i]==1)
    {
        cnt2++;
    }
    else
    {
        cnt3++;
    }
}
for(int i=0;i<cnt1;i++)
{nums[i]=0;}
for(int i=cnt1;i<cnt1+cnt2;i++)
{nums[i]=1;}
for(int i=cnt1+cnt2;i<n;i++)
{nums[i]=2;}
*/


//optimal solution is achieved through 
//dutch national flag algorithm

//3 rules
//(0 to low-1) => 0/red
//(low to mid-1) => 1/white
//(mid to high) => unsorted elements of array
//(high+1 to n-1) => 2/blue

//arr[mid]==0    swap(arr[low] , arr[mid]);
//               low++; mid++;
//arr[mid]==1    mid ++;
//arr[mid]==2    swap(arr[mid] , arr[high]);
//               high--;



int n =nums.size();
int low=0;
int mid =0;
int high=n-1;
while(mid<=high)
{
    if(nums[mid]==0)
    {
        swap(nums[low] , nums[mid]);
        low++;
        mid++;
    }
    else if(nums[mid]==1)
    {
        mid++;
    }
    else
    {
        swap(nums[mid] , nums[high]);
        high--;
    }
}

    }
};