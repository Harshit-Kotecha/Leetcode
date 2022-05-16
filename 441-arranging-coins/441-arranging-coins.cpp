class Solution {
public:
    int arrangeCoins(int n) {
        long long lo = 1, hi = n, mid;
        while(lo < hi) {
            mid = lo + (hi - lo) / 2;
            
            long long s = (mid * (mid + 1)) / 2;
            if(s < n)
                lo = mid + 1;
            else
                hi =  mid;
        }
        if((lo * (lo+1)) / 2 > n) lo--;
        return lo;
    }
};