class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int i = 0, s = 0;
        while(i < k) {
            s += nums[i++];
        }
        double maxi = s;
        for(int i = 0; i + k < nums.size(); i++) {
            s -= nums[i];
            s += nums[i+k];
            maxi = s > maxi ? s : maxi;
        }
        return maxi / k;
    }
};