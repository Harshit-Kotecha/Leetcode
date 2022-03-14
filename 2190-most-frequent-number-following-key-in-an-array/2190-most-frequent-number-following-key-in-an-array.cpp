class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        int t = nums[1], k = 0, res = 0, cnt = 0;
        for(int i = 1; i < nums.size(); i++) {
            t = nums[i];
            k = 0;
            for(int i = 0; i < nums.size() - 1; i++) {
                if(nums[i] == key && nums[i+1] == t) {
                    k++;
                }
            }
            if(k > cnt)
                res = t;
            
            cnt = max(cnt, k);
        }
        return res;
    }
};