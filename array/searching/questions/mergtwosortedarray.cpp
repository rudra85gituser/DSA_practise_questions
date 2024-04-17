#include<iostream>
using namespace std ;

int main(){
    int n;
    cout<<"enter the no. of element"<<endl;
    cin>>n;
    int arr1[n];
 cout<<"enter the entries of arr1"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    } 

    cout<<"now enter the no. of element for arr2"<<endl;

    int m;
    cout<<"enter the no. of element"<<endl;
    cin>>m;
    int arr2[m];
    cout<<"enter the entries of arr2"<<endl;
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    } 

    int arr3[n+m];
    int i=0;
    int j=0;
    int k=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr3[k++]=arr1[i++];
        }
        else{
            arr3[k++]=arr2[j++];
        }
    }

    while(i<n){
        arr3[k++]=arr1[i++];
    }

    while(j<m){
        arr3[k++]=arr2[j++];
    }
cout<<"printing arr3"<<endl;
    for(int i=0;i<n+m;i++){
        cout<<arr3[i]<<" ";
    }

    
    
}