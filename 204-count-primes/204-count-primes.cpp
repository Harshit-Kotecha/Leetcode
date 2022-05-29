class Solution {
public:
    int countPrimes(int n) {
        vector<bool> pri(n, true);
        int cnt = 0;
        for(int i = 2; i < (n); i++) {
            if(pri[i] == true) {
                cnt++;
                for(int j = 2; j*i < n; j++) {
                    pri[i*j] = false;
                }
            }
        }
        return cnt;
    }
};