#include<iostream>
using namespace std;
int power(int n){
    if(n==0){
        return 1;
    }

   /*  int small=power(n-1);
    int big=2*small;

    return big; */

    return 2*power(n-1);

}
int main(){
    int n;
    cout<<"enter the no. raised to 2"<<endl;
    cin>>n;
    cout<<power(n);
}