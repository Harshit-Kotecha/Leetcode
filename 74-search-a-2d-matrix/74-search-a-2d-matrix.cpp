class Solution {
public:
    bool searchMatrix(vector<vector<int>>& m, int t) {
        int r = m.size(), c = m[0].size();
        int lo = 0, hi = (r * c) - 1, mid;
        while(lo < hi) {
            mid = lo + (hi - lo) / 2;
            int i = mid / c;
            int j = mid - i*c;
            if(m[i][mid - i*c] < t)
                lo = mid + 1;
            else
                hi = mid;
        }
        return m[lo/c][lo - (lo/c)*c] == t;
    }
};