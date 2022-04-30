class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int res = 0, hill = -1, val = -1;
        for(int i = 1; i < nums.size() - 1; i++) {
            if(nums[i] == nums[i-1]) continue;
            int j = i - 1, k = i + 1;
            while(j >= 0 && nums[i] == nums[j]) j--;
            while(k < nums.size() && nums[i] == nums[k]) k++;
            
            if(j < 0 || k >= nums.size()) continue;
            
            if(nums[i] > nums[j] && nums[i] > nums[k]) {
                //hill = i; cout<<hill<<" ";
                res++;
            }
            else if(nums[i] < nums[j] && nums[i] < nums[k]) {
                // val = i; cout<<val<<" ";
                res++;
            }
            
        }
        return res;
    }
};