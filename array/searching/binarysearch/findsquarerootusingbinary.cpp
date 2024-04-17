// here we are finding square root using binary search //


#include<iostream>
using namespace std ;
int main (){
    int n;
    cout<<"enter to find the square root of element"<<endl;
    cin>>n;

    int s=0,e=n;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){

        if(mid*mid==n){
            ans=mid;
           
        }

        if(mid*mid<n){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;

        }

        mid=s+(e-s)/2;
        
        
    }

  
    int precision;
    cout<<"enter the no. of precision you want"<<endl;
    cin>>precision;

    int temsol=ans;
    double factor=1;
    double answer=temsol;
    for(int i=0;i<precision;i++){
        factor=factor/10;

        for(double j=answer; j*j<n ;j=j+factor){
          answer=j;
        }
    }
    cout<<answer;
    return 0;

}
