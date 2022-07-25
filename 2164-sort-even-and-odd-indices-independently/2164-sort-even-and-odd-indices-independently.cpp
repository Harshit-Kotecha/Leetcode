class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        if(nums.size() <= 2) return nums;
        
        vector<int> e, o;
        for(int i = 0; i < nums.size(); i++) {
            if(i & 1) o.push_back(nums[i]);
            else e.push_back(nums[i]);
        }
        sort(o.begin(), o.end(), greater<int>());
        sort(e.begin(), e.end());
        for(int i = 0, j = 0, k = 0; i < nums.size(); i++) {
            if(i & 1) nums[i] = o[j++];
            else nums[i] = e[k++];
        }
        return nums;
    }
};