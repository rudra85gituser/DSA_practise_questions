class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        //brute force method => sort in descending order and print the largest element
        /*
        if(n==1)
        {
            return arr[n-1];
        }
        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j< n-i-1;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
        return arr[n-1];
        */
        
        
        //optimal method 
        int max =0;
        for(int i=0; i<n;i++)
        {
            if(max<arr[i])
            {
                max = arr[i];
            }
        }
        return max;
    }
    
};