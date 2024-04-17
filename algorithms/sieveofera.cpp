// sieve of eratosthenes 
/* Input: n = 10
Output: 4
Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7. */
// counting prime number 
class Solution {
public:
    int countPrimes(int n) {
        // by sieve of eratosthenes
        int count=0;
      vector<bool>prime(n+1,true);
      prime[0]=false;
      prime[1]=false;
      for(int i=2;i<n;i++){
       if(prime[i]){
           count++;
           for(int j=2*i;j<n;j=j+i){
               prime[j]=0;
           }
       }
      }
      return count;

        
    }
};

/* we can optimise sieve of eratosthenes is segmented sieve */