#include<iostream>
using namespace std ;

int main(){
    int arr[6]={1,0,1,0,0,1};
    int i=0;
    int j=5;
    while(i<j){
        while(arr[i]==0 ){
            i++;
        }
        while(arr[j]==1 ){
            j--;
        }


        // conditon if you reached here 

        if( arr[i]==1 && arr[j]==0 ){

        swap(arr[i],arr[j]);
        i++;
        j--;
      }
       
    }
    for(int i=0;i<6;i++){
        cout<<arr[i];
    }

   
    return 0;
}