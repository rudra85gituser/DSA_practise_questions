#include<iostream>
using namespace std ;

int main(){
    int arr[7]={1,3,4,15,25,29,38};
    int n;
    cout<<"enter the element to search in an array"<<endl;
    cin>>n;
    int start=0,end=6;
    int   mid=start+(end-start)/2;
    while(start<=end){
        
        if(arr[mid]==n){
           cout<<"founded key is on index :: "<<mid<<endl;
           
        }
        
            if(arr[mid]<n){
                start=mid+1;

            }
            else{
                end=mid-1;
            }
       
        mid=start+(end-start)/2;
      
    }

 
   return 0;

    
}