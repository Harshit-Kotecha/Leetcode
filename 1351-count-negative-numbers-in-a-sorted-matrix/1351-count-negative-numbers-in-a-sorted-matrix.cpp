class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int res = 0;
        for(auto& i : grid) {
            int lo = 0, hi = i.size() - 1, mid;
            while(lo < hi) {
                mid = lo + (hi - lo) / 2;
                if(i[mid] >= 0)
                    lo = mid + 1;
                else
                    hi = mid;
            }
            if(i[lo] >= 0) {
                if(lo < i.size() - 1 && i[lo + 1] < 0) lo++;
                else continue;
            }
            else if(lo > 0 && i[lo - 1] < 0) lo--;
            res += (i.size() - lo);
        }
        return res;
    }
};