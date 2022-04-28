class Solution {
public:
    int findTheDistanceValue(vector<int>& a, vector<int>& b, int d) {
        int res = 0;
        sort(b.begin(), b.end());
        for(int t : a) {
            int lo = 0, hi = b.size() - 1, mid = 0;
            while(lo < hi) {
                mid = lo + (hi - lo) / 2;
                if(t > b[mid])
                    lo = mid + 1;
                else
                    hi = mid;
            }
            if(abs(t - b[mid]) <= d) continue;
            if(mid + 1 < b.size() && abs(t - b[mid + 1]) <= d) continue;
            if(mid > 0 && abs(t - b[mid - 1]) <= d) continue;
            res++;
        }
        return res;
    }
};