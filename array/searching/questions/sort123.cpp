#include<iostream>
using namespace std ;

int main(){
    int n;
    cout<<"enter the no of element of an array ";
    cin>>n;
    int arr[n];
    cout<<"now start entering the element in ana array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int i=0,k=0,j=n-1;

    while(k<j){
        while(arr[k]==0){
            swap(arr[i],arr[k]);
            i++;
            k++;
        }

        while(arr[k]==1){
            k++;
        }
        while(arr[k]==2){
            swap(arr[k],arr[j]);
            j--;
        }

    }
    cout<<"the sorted array is"<<endl;

    for(int i=0;i<n;i++){

        cout<<arr[i];   
    }

    return 0;
}