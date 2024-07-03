//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        // Complete the function
        //brute force
        //find all the possible subarray
        //find the submission of all the subarray
        //find the max sum which is equivalent to k
        
        
        //tc=O(n^3)
        /*
        int len =0;
        for(int i=0;i<N;i++)
        {
            for(int j=i;j<N;j++)
            {
                int sum=0;
                for(int l=i;l<=j;l++)
                {
                    sum +=A[l];
                    if(sum==K)
                    {
                        // to find the length between i and j , we do =j-i+1(end-start+1)
                        len =max(len,j-i+1);
                    }
                }
            }
        }
        return len;
        
        */
        
        //optimized brute force 
        //we do not use third loop
        // as the new element comes in subarrarray we do sum
        /*
        int len =0;
        for(int i=0;i<N;i++)
        {
            int sum=0;
            for(int j=i;j<N;j++)
            {
                
                sum +=A[j];
                    if(sum==K)
                    {
                        // to find the length between i and j , we do =j-i+1(end-start+1)
                        len =max(len,j-i+1);
                    }
            }
        }
        return len;
        */
        
        
        
        //better solution
        //using hashmap
     
    map<long long, int> preSumMap;
    long long sum = 0;
    int maxlen = 0;
    
    for (int i = 0; i < N; i++)
    {
        sum += A[i];
        
        if (sum == K) 
        {
            maxlen = max(maxlen, i + 1);
        }
        
        int rem = sum - K;
        if (preSumMap.find(rem) != preSumMap.end()) 
        {
            int len = i - preSumMap[rem];
            maxlen = max(maxlen, len);
        }
        
        if (preSumMap.find(sum) == preSumMap.end()) 
        {
            preSumMap[sum] = i;
        }
    }
    
    return maxlen;
    
    
    
    
    //optimal approach usingg two pointer
    /*
    int left=0;
    int right=0;
    int maxlen=0;
    long long sum =A[0];
    while(right<N)
    {
        while(left<=right && sum>K)
        {
            sum-=A[left];
            left++;
        }
        
        if(sum==K)
        {
            maxlen=max(maxlen,right-left+1);
        }
        right++;
        if(right<N)
        {
            sum+=A[right];
        }
    }
    return maxlen;
    */
}
};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends