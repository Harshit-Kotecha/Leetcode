class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num <= 1) return 1;
        int lo = 1, hi = num, mid;
        while(lo < hi) {
            mid = lo + (hi - lo) / 2;
            if(mid < num/mid) {
                lo = mid + 1;
            } else {
                hi = mid;
            }
        } 
        if(mid < num/mid) mid++;
        float x = num / mid;
        if(x * mid != num) return 0;
        if(mid == num / mid) return 1;
        return 0;
    }
};