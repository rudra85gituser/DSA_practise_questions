public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
        //return vector with correct order of elements
        //brute force solution is that we can use set
        //set stores elements in sorted order and each element is unique
        /*
        set<int> st;
        for(int i=0;i<n;i++)
        {
            st.insert(arr1[i]);
        }
        for(int i=0;i<m;i++)
        {
            st.insert(arr2[i]);
        }
        vector<int> v;
        for(auto it: st)
        {
            v.emplace_back(it);
        }
        return v;
        */
        
        //optimal solution is achieved using two pointer
        int i=0;
        int j=0;
        vector<int> v;
        while(i<n && j<m)
        {
            if(arr1[i]<=arr2[j])
            {
                if(v.size()==0 || v.back()!=arr1[i])
                   {
                       v.push_back(arr1[i]);
                   }
                   i++;
            }
            else
            {
                    if(v.size()==0 || v.back()!=arr2[j])
                   {
                       v.push_back(arr2[j]);
                   }
                   j++;
            }
            
        }
        while(j<m)
        {
            if(v.size()==0 || v.back()!=arr2[j])
                   {
                       v.push_back(arr2[j]);
                   }
                   j++;
        }
        while(i<n)
        {
              if(v.size()==0 || v.back()!=arr1[i])
                   {
                       v.push_back(arr1[i]);
                   }
                   i++;
        }
        return v;
    }