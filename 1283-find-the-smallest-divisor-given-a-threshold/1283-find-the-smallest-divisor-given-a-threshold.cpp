class Solution {
public:
    int smallestDivisor(vector<int>& nums, int t) {
        int lo = 1, hi = *max_element(nums.begin(), nums.end()), mid; 
        while(lo < hi) {
            mid = lo + (hi - lo) / 2;
            int s = 0; 
            for(int i : nums) {
                s += ((i + mid - 1) / mid);
            } 
            if(s > t)
                lo = mid + 1;
            else
                hi = mid;
        }
        return lo;
    }
};