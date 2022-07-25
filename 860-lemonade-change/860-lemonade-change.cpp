class Solution {
public:
    bool lemonadeChange(vector<int>& b) {
        unordered_map<int, int> m;
        for(auto& i : b) {
            if(i != 5) {
                int x = i - 5;
                int cnt = min(x / 20, m[20]);
                if(cnt) {
                    x -= (20 * cnt);
                    m[20] -= cnt;
                } 
                if(x > 0) {
                    cnt = min(x / 10, m[10]);
                    if(cnt) {
                        x -= (10 * cnt);
                        m[10] -= cnt;
                    }
                }
                if(x > 0) {
                    cnt = min(x / 5, m[5]);
                    if(cnt) {
                        x -= (5 * cnt);
                        m[5] -= cnt;
                    }
                }
                if(x != 0) return 0;
            }
            m[i]++;
        }
        return 1;
    }
};