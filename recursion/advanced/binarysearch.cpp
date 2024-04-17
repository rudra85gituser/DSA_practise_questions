#include<iostream>
using namespace std;

bool binary(int arr[],int s,int e,int target){
// base case
    if(s>e){
        return false;
    }
    int mid=s+(e-s)/2;

    if(arr[mid]==target){
        return true;
    }
    if(arr[mid]<target){
        return binary(arr,mid+1,e,target);
    }
    else{
        return binary(arr,s,mid-1,target);
    }

}

int main(){
    int arr[5]={8,15,41,55,88};
    int s=0;
    int e=4;
    int target;
    cout<<"enter your target"<<endl;
    cin>>target;
   if(binary(arr,s,e,target)) {
    cout<<"element found"<<endl;
   }jm
   else{
    cout<<"not found"<<endl;
   }
   
}