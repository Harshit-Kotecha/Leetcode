class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int lo = 0, hi = arr.size() - 1, mid;
        while(lo < hi) {
            mid = lo + (hi - lo) / 2;
            if(arr[mid+1] > arr[mid])
                lo = mid + 1;
            else
                hi = mid;
        }
        return lo;
    }
};