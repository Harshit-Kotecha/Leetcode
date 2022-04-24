class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int res = 0;
        for(auto x : grid) {
            int lo = 0, hi = x.size() - 1, mid;
            while(lo < hi) {
                mid = lo + (hi - lo) / 2;
                if(x[mid] > -1)
                    lo = mid + 1;
                else
                    hi = mid;
            }
            if(x[lo] >= 0) lo++;
            if(lo < x.size()) res += x.size() - lo;
        }
        return res;
    }
};