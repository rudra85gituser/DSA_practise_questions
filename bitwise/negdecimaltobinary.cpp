#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int answer=0;
    int digit=0;
    int i=0;
    while(n!=0){
        int bit=n&1;
        digit=(bit*pow(10,i))+digit;
       n= n>>1;
        i++;
    }
    cout<<digit<<endl;

    while(digit!=0){
        int digite=digit%10;
        if(digite==1){
            digite=0;
        }
        else{
            digite=1;
        }

        answer=digite*pow(10,i)+answer;

        digit=digit/10;
    }
    cout<<answer<<endl;

   
}