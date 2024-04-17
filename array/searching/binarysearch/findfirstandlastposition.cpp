#include<iostream>
using namespace std;

int firstoccur(int arr[],int size,int key)
{   
    int s=0,e=size-1;
   int mid=s+(e-s)/2;
   int ans=-1;
   while(s<=e){
    if(arr[mid]==key){
         ans=mid;
        e=mid-1;   
    }
    else if( arr[mid]<key){
        s=mid+1;
    }
    else if(arr[mid]>key){
        e=mid-1;
    }
    else{
        return -1;
    }

     mid=s+(e-s)/2;
   }

   return ans;
}

int lastoccur(int arr[],int size,int key)
{   
    int s=0,e=size-1;
   int mid=s+(e-s)/2;
    int ans=-1;
   while(s<=e){
    if(arr[mid]==key){
        ans=mid;
        s=mid+1;   
    }
    else if( arr[mid]<key){
        
        s=mid+1;
    }
    else if(arr[mid]>key){
        e=mid-1;

    }
    else{
        return -1;
    }

     mid=s+(e-s)/2;
   }

   return ans;
}

int main(){
    int arr[6]={5,7,8,8,8,10};
    int n;
    cout<<"enter the element to search"<<endl;
    cin>>n;

    cout<<"first occurance of an element n ::" <<firstoccur( arr ,6, n)<<endl;
    cout<<"last occurance of an element n ::" <<lastoccur(arr ,6, n)<<endl;

    return 0;

}