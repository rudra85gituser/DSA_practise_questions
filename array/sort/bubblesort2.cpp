#include<iostream>
using namespace std ;

int main(){
    int n;
    cout<<"enter the no of element of an array"<<endl;
    cin>>n;
    int arr[n]; 
    int count=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
for(int i=1;i<n-1;i++){
for(int j=0 ;j<n;j++){
    if(arr[j]>arr[j+1]){
       
        swap(arr[j],arr[j+1]);
    }
    }
    }
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}