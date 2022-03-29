class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        // 0 - false, 1 = true, -1 = don't count
        int visit[101] = {0};
        int res = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(visit[nums[i]] == 0) {
                res += nums[i];
                visit[nums[i]] = -1;
            } else if(visit[nums[i]] == -1) {
                res -= nums[i];
                visit[nums[i]] = -2;
            }
        }
        return res;
    }
};