class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        if(nums2.size() < nums1.size()) {
            return intersect(nums2, nums1);
        }
        unordered_map<int, int> m;
        for(int x : nums2) m[x]++;
        vector<int> res;
        for(int x : nums1) {
            if(m[x]) {
                res.push_back(x);
                m[x]--;
            }
        }
        return res;
    }
};