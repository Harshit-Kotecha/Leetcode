class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        if(nums.size() <= 2) return 1;
        int c1 = 0, c2 = 0;
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] >= nums[i-1]) c1++;
            if(nums[i] <= nums[i-1]) c2++;
        }
        cout<<c1<<" "<<c2<<endl;
        if (c1 == nums.size() - 1 || c2 == nums.size() - 1) return 1;
        return 0;
    }
};