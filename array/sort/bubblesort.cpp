#include<iostream>
using namespace std ;

int main(){
    int n;
    cout<<"enter the no of element of an array"<<endl;
    cin>>n;
    int arr[n]; 
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=0;
    cout<<"sorting an array using bubblesort "<<endl;

    for(int i=1;i<n;i++){
        bool swapped=false;
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                count++;
                swapped=true;
            }    
        }if(swapped==false){
                
                break;
            }
    }
    cout<<"total no. of swap are::"<<count<<endl;
  for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    } 

    if(count==0){
        cout<<"it is a best case of bubble sort in this array all the "<<endl;
        cout<<"element are already sorted "<<endl;
        cout<<"time complexity for such case are O(n).when we use above code only"<<endl;
    }
  
    return 0; 
}