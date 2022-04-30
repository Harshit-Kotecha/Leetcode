class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int res = INT_MAX;
        for(int i : nums) {
            if(abs(i) < abs(res) || (abs(i) == abs(res) && i > res))
                res = i;
        }
        return res;
    }
};