class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        set<int> s(nums.begin(), nums.end());
        vector<int> res;
        for(int i = 1; i <= nums.size(); i++) {
            if(s.find(i) == s.end())
                res.push_back(i);
        }
        return res;
    }
};