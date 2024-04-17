#include<iostream>
using namespace std;



int main(){
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int s=0;
    int e=8;
    int mid=s+(e-s)/2;
    int target;

    cout<<"enter the target which to be find"<<endl;
    cin>>target;

    while(s<=e){

        int element=arr[mid/3][mid%3];

        if(element==target){
            cout<<"found element";
           
        }

        if(element<target){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
      mid=s+(e-s)/2;
    }
    return 0;
}