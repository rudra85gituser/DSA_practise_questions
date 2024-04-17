#include<iostream>
using namespace std;

int main (){
    int n;
    cout<<"enter the size"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"elements you entered are::"<<endl;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    int count=0;
    for(int i=1;i<n;i++){
        if(arr[i-1]>arr[i])
        {
            count++;
        }
    }
    if(arr[n-1]>arr[0])
    {
        count++;
    }

    if(count<=1){
        cout<<"array is sorted and rotated"<<endl;
    }
    else{
        cout<<"no it is not "<<endl;
    }




}