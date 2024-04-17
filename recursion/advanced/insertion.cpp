#include<iostream>
using namespace std ;

void insertion(int *arr,int size){
    if(size<=1){
        return ;
    }
     insertion(arr,size-1);
    int temp=arr[size-1];
    int j=size-2;
    while(j>=0 && arr[j]>temp){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=temp;
   
        
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

insertion(arr,n);
cout<<endl<<endl;

 for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}