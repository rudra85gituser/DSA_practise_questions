#include<iostream>
using namespace std;



int main(){
    int arr[3][4];
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int j=0;j<4;j++){
        if(j&1){
            for(int i=3-1;i>=0;i--){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int i=0;i<3;i++){
                cout<<arr[i][j]<<" ";
            }
        }
    }

 

    return 0;
}