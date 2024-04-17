#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no. of element"<<endl;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    } 
    
    int s=0;
    int e=5-1;
    while(s<e){
        swap(arr[s],arr[e]);
        s++;
        e--;

    }
    for(int i=0;i<5;i++){
        cout<<arr[i];
    }
    return 0;
}