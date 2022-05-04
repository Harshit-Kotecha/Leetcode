class Solution {
public:
    int smallestDivisor(vector<int>& nums, int t) {
        sort(nums.begin(), nums.end());
        int lo = 1, hi = nums.back(), mid;
        while(lo < hi) {
            mid = lo + (hi - lo) / 2;
            int s = 0;// cout<<mid<<" ";
            for(double i : nums) {
                double x = i / mid;
                s += ceil(x); //cout<<ceil(x)<<" ";
                if(s > t) break;
            } //cout<<s<<" ";
            if(s > t)
                lo = mid + 1;
            else
                hi = mid;
        }
        return lo;
    }
};