class Solution {
public:
    int countPrimes(int n) {
        int cnt = 0;
        vector<bool> prime(n+1, true);
        // 0 1 are non prinme
        prime[0] = prime[1]= false;

        for(int i =2; i<n; i++){
            if(prime[i]){
                cnt++;

                for(int j = 2*i; j<n; j=j+i){// mark non prime
                    prime[j]= 0;
                }
            }
        }
        return cnt;
        
    }
};