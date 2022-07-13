class Solution {
public:
    int numOfSubarrays(vector<int>& nums, int k, int t) {
        int s = 0;
        for(int i = 0; i < k; i++) {
            s += nums[i];
        }
        int res = s/k >= t ? 1 : 0;
        for(int i = 0; i + k < nums.size(); i++) {
            s += nums[i+k] - nums[i];
            if(s/k >= t) res++;
        }
        return res;
    }
};