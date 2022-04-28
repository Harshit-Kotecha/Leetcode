class Solution {
public:
    int peakIndexInMountainArray(vector<int>& a) {
        int lo = 0, hi = a.size() - 1, mid;
        while(lo < hi) {
            mid = lo + (hi - lo) / 2;
            if(a[mid] < a[mid + 1])
                lo = mid + 1;
            else
                hi = mid;
        }
        return lo;
    }
};