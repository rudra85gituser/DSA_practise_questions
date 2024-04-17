// intersection of two array todo

// not working properly video lecture 10 time stamp 1hr//
#include<iostream>
using namespace std ;

int main(){
    int n;
    cout<<"enter the size of arr1"<<endl;
    cin>>n;

    int m;
    cout<<"enter the size of arr2"<<endl;
    cin>>m;

    int arr1[n];
    int arr2[m];
    cout<<"now enter the element for arr1"<<endl;

    for(int i=0; i<n ;i++){
        cin>>arr1[i];
    }
    cout<<"now enter the element for arr2"<<endl;

    for(int i=0; i<n ;i++){
        cin>>arr2[i];
    }
    int ans;
    int i=0; 
    int j=0;
    while( i<n && j<m )
    {
        if(arr1[i]==arr2[j]){
            ans=arr1[i];
            
            i++;
            j++;
        }
        else
            if(arr1[i]<arr2[j]){
            i++;
            }
            else{
                j++;
            }
        
    }
    cout<<"intersection is:"<<ans<<endl;

   return 0; 
    
}