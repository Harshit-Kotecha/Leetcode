class Solution {
public:
    bool isPerfectSquare(int num) {
        int lo = 1, hi = num, mid;
        while(lo < hi) {
            mid = lo + (hi - lo) / 2;
            if(mid < num / mid)
                lo = mid + 1;
            else
                hi = mid;
        }
        float x = num / lo;
        if(x * lo != num) return 0;
        return lo == num / lo ? 1 : 0;
    }
};