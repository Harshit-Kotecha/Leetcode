class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        
        int n = arr.size();
        int s = 0;
        for (int i = 0; i < n; i++) {
            s += ((((n-i) * (i+1)) + 1) / 2) * arr[i];
        }
        return s;
    }
};