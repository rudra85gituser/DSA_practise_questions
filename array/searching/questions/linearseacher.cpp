#include<iostream>
using namespace std ;

int main(){
    int arr[10]={1,5,8,7,5,6,4,5,9,0};
    int n;

    cout<<"enter the key to search"<<endl;
    cin>>n;

    for(int i=0;i<10;i++){
        if(arr[i]==n){
            cout<<"key is present"<<endl;
            
        }
        
    }

    return 0;


}