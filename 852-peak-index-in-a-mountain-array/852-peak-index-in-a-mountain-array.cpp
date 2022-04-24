class Solution {
public:
    int peakIndexInMountainArray(vector<int>& a) {
        int lo = 0, hi = a.size() - 1, i;
        while(lo < hi) {
            i = lo + (hi - lo) / 2;
            if(i > 0 && i + 1 < a.size()) {
                if(a[i] > a[i-1] && a[i+1] > a[i])
                    lo = i + 1;
                else if(a[i-1] > a[i] && a[i] > a[i+1])
                    hi = i - 1;
                else
                    return i;
            } else if(i == 0) {
                return i + 1;
            } else {
                return i - 1;
            }
           
        }
        return lo;
    }
};