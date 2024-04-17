#include<iostream>
using namespace std;

int main(){
     int n;
    cout<<"enter the no. of element"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter entries of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    } 

    int i=0;
    for(int j=0;j<n;j++){
        if(arr[j]!=0){
            swap(arr[j],arr[i]);
            i++;
        }
    }
  for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    } 
    
}