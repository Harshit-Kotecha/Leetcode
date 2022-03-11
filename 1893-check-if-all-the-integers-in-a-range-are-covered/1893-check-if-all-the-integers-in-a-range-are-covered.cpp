class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        bool cnt[51] = {};
        for(auto x : ranges) {
            for(int i = x[0]; i <= x[1]; i++)
                cnt[i] = true;
        }
        for(int i = left; i <= right; i++) 
            if(cnt[i] == false)
                return 0;
        
        return 1;
    }
};