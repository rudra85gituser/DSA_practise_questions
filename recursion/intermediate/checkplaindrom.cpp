#include<iostream>
using namespace std;

bool palindrom(string &str,int size,int i,int j){
    if(i>=j){
        return true;
    }

    if(str[i]==str[j]){
        return true;
    }
    else{
        return false;
    }

    palindrom(str,size,i++,j--);
}

int main(){
    string str;
    cin>>str;
    cout<<"entered string is :"<<str<<endl;
    int size=str.length();
    int i=0;
    int j=size-1;

    if(palindrom(str,size,i,j)){
        cout<<"entered string is palindrome"<<endl;
    }
    else{
        cout<<"no it is not a palindrome"<<endl;
    }
}