#include<iostream>
using namespace std;

int total(int *arr,int size){
   
   if(size==0){
    return 0;
   }
   if(size==1){
    return arr[0];
   }
    

int sum=arr[0]+total(arr+1,size-1);
return sum;
   
}
int main(){
    int arr[5]={4,8,9,15,12};
  cout<<total(arr,5);

}