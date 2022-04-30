class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int res = INT_MAX;
        for(int i : nums) {
            if(i >= 0 && i <= abs(res)) res = i;
            else if(i < 0 && abs(i) < abs(res)) res = i;
        }
        return res;
    }
};