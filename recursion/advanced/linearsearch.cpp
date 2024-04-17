#include<iostream>
using namespace std;

bool search(int *arr,int size,int target){
   
  if(size==0||size==1){
    if(arr[0]==target){
        return true;
    }
    else{
        return false;
    }
  }

  if(arr[0]==target){
    return true;
  }
  else{
    return search(arr+1,size-1,target);
  }
   
}
int main(){
    int arr[5]={4,8,9,15,12};
    int n;
    cin>>n;
    if(search(arr,5,n)){
        cout<<"element found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }

}