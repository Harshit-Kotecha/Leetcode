class Solution {
public:
    int arraySign(vector<int>& nums) {
        int res = 1;
        for(auto x : nums) {
            if(x == 0)
                return 0;
            if(x < 0)
                res *= -1;
            
        }
        
        return res;
    }
};