class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int cnt[101] = {0};
        int res = 0;
        for(int x : nums) {
            res += cnt[x]++;
        }
        return res;
    }
};