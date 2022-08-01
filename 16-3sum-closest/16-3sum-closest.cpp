class Solution {
public:
    int threeSumClosest(vector<int>& nums, int t) {
        sort(nums.begin(), nums.end());
        int sum = 1111, rs = 0, n = nums.size();
        for(int i = 0; i + 2 < n; i++) {
            int lo = i+1, hi = n - 1, a = nums[i];
            while(lo < hi) {
                int s = a + nums[lo] + nums[hi];
                if(s == t) return s;
                if(abs(t-s) < abs(t-sum)) {
                    sum = s;
                    
                }
                if(lo+1 >= hi || hi-1 <= lo) break;
                int x = a+nums[lo+1]+nums[hi], y = a+nums[lo]+nums[hi-1];
                if(abs(t-x) < abs(t-y)) {
                    while(lo < hi && nums[lo] == nums[lo+1]) lo++;
                    lo++;
                } else {
                    while(lo < hi && nums[hi] == nums[hi-1]) hi--;
                    hi--;
                }
            }
            while(i+1 < n && nums[i] == nums[i+1]) i++;
        }
        return sum;
    }
};