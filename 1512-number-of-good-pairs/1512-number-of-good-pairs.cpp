class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int cnt[101] = {0};
        for(int x : nums)
            cnt[x]++;
        int res = 0;
        for(int i = 0; i < 101; i++) {
            res += (cnt[i] * (cnt[i] - 1)) / 2;
        }
        return res;
    }
};