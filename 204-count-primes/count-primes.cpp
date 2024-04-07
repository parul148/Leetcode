class Solution {
public:
    int countPrimes(int n) {
        if (n <= 1) return 0;
        
        vector<bool> isPrime(n, true);
        
        
        for (int p = 2; p * p < n; ++p) {
            if (isPrime[p]) {
                
                for (int i = p * p; i < n; i += p) {
                    isPrime[i] = false;
                }
            }
        }

        int cnt = 0;
        for (int p = 2; p < n; ++p) {
            if (isPrime[p]) {
                ++cnt;
            }
        }
        
        return cnt;
    }
};