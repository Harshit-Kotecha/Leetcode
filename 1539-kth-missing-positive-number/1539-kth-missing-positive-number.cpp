class Solution {
public:
    int findKthPositive(vector<int>& a, int k) {
        int cnt[10001] = {0};
        for(int i : a) 
            cnt[i]++;
        for(int i = 1; i < 10001; i++) {
            if(cnt[i] == 0) k--;
            if(k == 0) return i;
        }
        return k;
    }
};