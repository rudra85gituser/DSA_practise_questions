#include<iostream>

using namespace std ;


int main(){
    int n;
    cout<<"enter the no of element of an array"<<endl;
    cin>>n;
    int arr[n]; 
    
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"sorting an array"<<endl;
    int minele=0;
    for(int i=0;i<n-1;i++){
        minele=i;

        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minele]){
                minele=j;
            }

        }
        swap(arr[minele],arr[i]);

    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }

    return 0;
}