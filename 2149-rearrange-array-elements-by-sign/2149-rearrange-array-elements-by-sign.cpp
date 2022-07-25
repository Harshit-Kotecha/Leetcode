class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> p, n;
        for(int i = 0; i< nums.size(); i++) {
            if(nums[i] < 0) n.push_back(nums[i]);
            else p.push_back(nums[i]);
        }
        for(int i = 0, j = 0, k = 0; i < nums.size(); i++) {
            if(i%2 == 0 && j < p.size()) nums[i] = p[j++];
            else if(i&1 && k < n.size()) nums[i] = n[k++];
            else if(j < p.size()) nums[i] = p[j++];
            else nums[i] = n[k++];
        }
        return nums;
    }
};