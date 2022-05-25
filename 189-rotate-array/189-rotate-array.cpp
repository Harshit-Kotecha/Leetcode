class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k %= nums.size();
        swapp(nums, 0, nums.size() - k - 1);
        swapp(nums, nums.size() - k, nums.size() - 1);
        swapp(nums, 0, nums.size() - 1);
    }
    void swapp(vector<int>& nums, int i, int j) {
        while(i < j) swap(nums[i++], nums[j--]);
    }
};