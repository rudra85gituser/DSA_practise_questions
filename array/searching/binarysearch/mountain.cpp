#include<iostream>
using namespace std ;

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
    while (s<=e){
        if(arr[mid]>arr[mid+1]){
            ans=mid;
            cout<<ans;
            break;
        }
        else if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }

       mid=s+(e-s)/2; 

    }

    
    return 0;
}