class Solution {
public:
    int mySqrt(int x) {
        if(x == 0) return 0;
        int lo = 1, hi = x, mid;
        while(lo < hi) {
            mid = lo + (hi - lo) / 2;
            if(mid < x / mid)
                lo = mid + 1;
            else
                hi = mid;
        }
        if(lo > x / lo) return lo - 1;
        return lo;
    }
};