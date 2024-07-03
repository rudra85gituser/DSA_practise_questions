public:
    // Function to find element in sorted array
    // arr: input array
    // N: size of array
    // K: element to be searche
    int searchInSorted(int arr[], int N, int K) 
    { 
    
       // Your code here
       int flag = 0;
       for(int i=0;i<N;i++)
       {
           if(arr[i]==K)
           {
           flag = 1;
           }
       }
       if(flag == 1)
       {
           return 1;
       }
       else 
       {
           return -1;
       }
    }