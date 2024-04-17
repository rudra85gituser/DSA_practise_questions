#include<iostream>
using namespace std;

bool sorted(int *arr,int size){

    if(size==0||size==1){
        return true;
    }

    if(arr[0]>arr[1]){
        return false;
    }
    else{
      return sorted(arr+1,size-1);
    }
}
int main(){
    int arr[5]={3,8,9,15,12};
   
    if(sorted(arr,5)){
        cout<<"array is sorted"<<endl;
    }
    else{
        cout<<"nopeees"<<endl;
    }
}