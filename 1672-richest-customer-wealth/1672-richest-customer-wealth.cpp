class Solution {
public:
    int maximumWealth(vector<vector<int>>& a) {
        int res = 0;
        for(auto& x : a) {
            int c = 0;
            for(int k : x)
                c += k;
            res = max(res, c);
        }
        return res;
    }
};