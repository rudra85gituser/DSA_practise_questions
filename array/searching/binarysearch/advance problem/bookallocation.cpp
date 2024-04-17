#include<iostream>
using namespace std;

bool ifpossible(int arr[],int n,int m,int mid){
    int pagesum=0;
    int studentcount=1;
    
    for(int i=0;i<n;i++){
        if(pagesum + arr[i] <= mid){
          pagesum+=arr[i];
        }
        else{
            studentcount++;
            if(studentcount>m||arr[i]>mid){
                return false;
            }
            pagesum+=arr[i];
        }
        if(studentcount>m){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cout<<"enter the size of an array"<<endl;
    cin>>n;

    int arr[n];
    
    cout<<"enter the entries of an array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int s=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int m;
    cout<<"enter the no. of student"<<endl;
    cin>>m;
    int ans=-1;
    int e=sum;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(ifpossible(arr,n,m,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
       mid=s+(e-s)/2;  
    }
    cout<<ans;

}