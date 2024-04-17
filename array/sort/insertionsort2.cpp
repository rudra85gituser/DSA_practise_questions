#include<iostream>
using namespace std ;

int main(){
    int n;
    cout<<"enter the size of an ::"<<endl;
    cin>>n;

    int arr[n];
    cout<<"enter the element to be sort"<<endl;
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"elements you enter are"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }
    int temp;
    for(int i=1;i<n;i++){
        temp=arr[i];
        int j=i-1;
        for(;j>=0;j--){
            if(arr[j]>temp){
            arr[j+1]=arr[j];

            }
            else{
                break;
            }

        }
        arr[j+1]=temp;
    }

     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }
}