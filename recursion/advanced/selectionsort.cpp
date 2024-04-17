#include<iostream>
using namespace std;

int selectionsort(int *arr,int n){

}

int main(){
   int n;
   cout<<"enter the size of an array"<<endl;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
      cin>>arr[i];
   }
   for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
   }
   selectionsort(arr,n);

}