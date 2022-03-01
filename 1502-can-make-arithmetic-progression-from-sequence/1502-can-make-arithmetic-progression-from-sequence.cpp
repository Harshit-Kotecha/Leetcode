class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& nums) {
        int a = INT_MAX, l = INT_MIN;
        set<int> s;
        for(auto x : nums) {
            a = min(a, x);
            l = max(l, x);
            s.insert(x);
        }
        int n = nums.size();
        if((l - a) % (n-1) != 0)
            return 0;
        int d = (l - a) / (n - 1);
        for(int i = 0; i < n; i++) {
            if(s.find(a + (i*d)) == s.end())
                return 0;
        }
        return 1;
    }
};