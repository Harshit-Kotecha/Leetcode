class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int t) {
        int m = mat.size(), n = mat[0].size();
        int lo = 0, hi = m*n - 1, mid;
        while(lo < hi) {
            mid = lo + (hi - lo) / 2;
            //int r = mid / n, c = mid % n;
            if(t > mat[mid/n][mid%n])
                lo = mid + 1;
            else 
                hi = mid;
        }
        if(mat[lo/n][lo%n] == t) return 1;
        return 0;
    }
};