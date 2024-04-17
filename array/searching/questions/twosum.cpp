#include<iostream>
using namespace std;

int main(){
    int arr[5]={ 1,4,2,3,5};
int i=0;
int j=1;
    for(int i=0;i<5;i++){
        for(int j=1;j<5;j++){
            if(arr[i]+arr[j]==5){
                cout<<arr[i]<<"and"<<arr[j]<<endl;
                
            }
        }

    }
    return 0;
}