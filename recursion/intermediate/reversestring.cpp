#include<iostream>
using namespace std;

void reverse(string &str,int start,int end){

   

  if(start>end){
    return ;
  }

    swap(str[start],str[end]);

    
  reverse(str,start+1,end-1);


    
}

int main(){ 
string str;
cin>>str;
int size=str.length();
int s=0;
int e=size-1;

reverse(str,s,e);
cout<<str;

}