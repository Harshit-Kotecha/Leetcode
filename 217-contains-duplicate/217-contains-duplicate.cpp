class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> s;
        for(auto x : nums) {
            if(s.find(x) != s.end())
                return 1;
            s.insert(x);
        }
        return 0;
    }
};