class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int t) {
        for(auto x : mat) {
            if(t > x.back()) continue;
            int lo = 0, hi = x.size() - 1, mid;
            while(lo <= hi) {
                mid = lo + (hi - lo) / 2;
                if(x[mid] == t) return 1;
                else if(t > x[mid]) lo = mid + 1;
                else hi = mid - 1;
            }
        }
        return 0;
    }
};