// euclids algorithm for hcf/gcd

#include<iostream>
using namespace std;

int gcd(int a,int b){
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
    while(a!=b){
        if(a>b){
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
    return a;
}

int main(){
    int n;
    int m;
    cout<<"enter the values"<<endl;
    cin>>n;
    cin>>m;
    cout<<"find the hcf of "<<n<<"and"<<m<<endl;
   int w=gcd(n,m);
   cout<<"hcf"<<w;
    return 0;
}
