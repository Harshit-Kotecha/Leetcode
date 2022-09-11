class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int, int> m;
        int rs = INT_MAX, cnt = 0;
        for(auto& i : nums) {
            if(i%2 == 0) {
                m[i]++;
                if(m[i] > cnt) {
                    cnt = m[i];
                    rs = i;
                } else if(m[i] == cnt) {
                    rs = min(rs, i);
                }
            }
        }
        return rs == INT_MAX ? -1 : rs;
    }
};