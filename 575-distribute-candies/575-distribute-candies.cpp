class Solution {
public:
    int distributeCandies(vector<int>& nums) {
        int n = nums.size() / 2, res = 0;
        unordered_map<int, bool> map;
        for(int x : nums)
            map[x] = 1;
        for(auto& m : map) {
            res ++;
            if(res >= n)
                return min(res, n);
        }
        return res;
        // if(n == 0)
        //     return 0;
        // sort(nums.begin(), nums.end());
        // int res = 1;
        // for(int i = 1; i < nums.size(); i++) {
        //     if(nums[i] != nums[i-1])
        //         res++;
        //     if(res >= n)
        //         return min(res, n);
        // }
        // return res;
    }
};