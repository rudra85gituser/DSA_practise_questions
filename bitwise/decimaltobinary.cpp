

#include <iostream>
using namespace std;

long long decimalToBinary(int n){
    long long ans = 0;
    int remainder, i = 1;
    while(n!=0){
        remainder = n % 2;
        ans += remainder*i;
        i = i * 10;
        n = n / 2;
}

    return ans;
    }
    int main() {
    int n ;
    cin>>n;
    long long bin = decimalToBinary(n);

    cout << n<< " in Decimal is "<< bin << endl;
    return 0;
}