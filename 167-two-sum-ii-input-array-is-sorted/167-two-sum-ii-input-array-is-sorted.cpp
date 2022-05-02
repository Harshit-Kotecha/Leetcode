class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i = 0, j = nums.size() - 1;
        for(int i = 0; i < nums.size(); i++) {
            int lo = i + 1, hi = nums.size() - 1, mid;
            while(lo < hi) {
                mid = lo + (hi - lo) / 2;
                if((target - nums[i]) > nums[mid])
                    lo = mid + 1;
                else
                    hi = mid;
            } //cout<<nums[lo]<<" ";
            if(lo < nums.size() && nums[lo] == target - nums[i]) return {i+1, lo+1};
        }
        return {};
    }
};