class Solution {
public:
    int divisorSubstrings(int num, int k) {
        int n = num, res = 0;
        
        while(n > 0 && ((floor(log10(n)) + 1) >= k)) {
            long x = n % (long)pow(10, k); cout<<x<<" ";
            if(x != 0 && (num % x == 0)) {
                res++;
            }
            n /= 10;
        }
        return res;
    }
};