#include<iostream>
#include<vector>
using namespace std;
 
 int main(){
    int n;
    cout<<"enter the no. of element"<<endl;
    cin>>n;
    int arr1[n];
 cout<<"enter the entries of arr1"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    } 

    cout<<"now enter the no. of element for arr2"<<endl;

    int m;
    cout<<"enter the no. of element"<<endl;
    cin>>m;
    int arr2[m];
    cout<<"enter the entries of arr2"<<endl;
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    } 
    
    vector<int> ans;
int i=n-1;
int j=m-1;
int carry;
    while(i>=0 && j>=0){
        int sum=arr1[i]+arr2[j]+carry;
        sum=sum%10;
        carry=sum/10;
        ans.push_back(sum);
        i--;
        j--;
    }

    while(i>=0){
        int sum=arr1[i];
        ans.push_back(sum);
        i--;
    }

    while(j>=0){
        int sum=arr2[j];
        ans.push_back(sum);
        j--;
    }

    while(carry!=0){
        int sum=carry;
        ans.push_back(sum);
    }

   for(int i:ans){
    cout<<i<<" ";
   }
return 0;
 }