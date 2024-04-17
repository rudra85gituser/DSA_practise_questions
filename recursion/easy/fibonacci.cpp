#include<iostream>
using namespace std;
    int fibonacci(int m){
       if(m==0){
        return 0;
       }

       if(m==1){
         return 1;
       }
  
       int ans= fibonacci(m-1) + fibonacci(m-2);
       return ans;

    }
int main(){
   
    int m;
    cout<<"enter the  range of series"<<endl;
    cin>>m;
   
   cout<<fibonacci(m);
   
 
}