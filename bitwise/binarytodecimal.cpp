#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    int arr[n];
    cin>>n;
   int answer=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
  
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            
            answer=answer+pow(2,i);
            
        }
        else{
            continue;
        }
    }
    cout<<answer<<endl;

  
}
