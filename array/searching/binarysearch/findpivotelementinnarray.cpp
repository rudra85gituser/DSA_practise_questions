// enter only rotated and sorted array in array entry 
// eg...[3, 4, 1, 2] ,[2, 3, 4, 1] etc

#include<iostream>
using namespace std;





int main(){
    int n;
    cout<<"enter the number of element of an array"<<endl;
    cin>>n;
    
    int arr[n];

    for(int i=0; i<n;i++){
        cin>>arr[i];
    }

    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    int ans=0;
    while(s<e){
        if(arr[mid]>arr[0]){
           ans=s; 
           s=mid+1;  
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    cout<<"pivot element is of index::"<<s<<"and element is ::"<<arr[s];


   return 0;


}