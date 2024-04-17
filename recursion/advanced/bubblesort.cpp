#include<iostream>
using namespace std;
void bubble(int *arr,int size,int i){
   if(i>=size){
    return;
   }

   int min=i;
   for(int k=0;k<size-i;k++){
    if(arr[k]>arr[k+1]){
        swap(arr[k],arr[k+1]);
        return bubble(arr,size,i++);
    }
   }
}

int main(){
    int arr[5]={15,8,3,4,2};

    bubble(arr,5,1);

    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}
