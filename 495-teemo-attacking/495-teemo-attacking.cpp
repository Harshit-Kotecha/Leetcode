class Solution {
public:
    int findPoisonedDuration(vector<int>& t, int d) {
        int res = d;
        for(int i = 0; i < t.size() - 1; i++) {
            if(t[i] + d - 1 < t[i+1]) {
                res += d;
                
            }
            else {
                res += (t[i+1] - t[i]);
            }
        }
        return res;
    }
};