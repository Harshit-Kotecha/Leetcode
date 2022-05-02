class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int, int> m;
        vector<int> res;
        for(int i = 1; i <= nums.size(); i++) {
            m[i]++;
        }
        for(int i : nums) {
            if(--m[i] < 0) {
                res.push_back(i);
                //break;
            }
        }
        for(auto& i : m) {
            if(i.second == 1) res.push_back(i.first);
        }
        return res;
    }
};