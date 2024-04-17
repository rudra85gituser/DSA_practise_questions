#include<iostream>
using namespace std;



int main(){
    int arr[3][4];
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

   cout<<"row wise some "<<endl;
   int k=3;
   int arr1[k];
   int sum=0;
   int maxi=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            sum+=arr[i][j];
            
            
        }
        cout<<"sum of "<<i+1<<"row is::"<<sum<<endl;

        if(sum>maxi){
            maxi=sum;

        }
        cout<<maxi;
      
    }

  
     
   




    return 0;
}