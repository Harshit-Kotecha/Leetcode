class Solution {
public:
    bool canPlaceFlowers(vector<int>& f, int n) {
        if(n == 0) return 1;
        int cnt = 0;
        for(int i = 0; i < f.size() && n > 0; i++) {
            if(f[i] == 0) {
                bool left = (i == 0) || (f[i-1] == 0);
                bool right = (i == f.size()-1) || (f[i+1] == 0);
                
                if(left && right) {
                    n--;
                    f[i] = 1;
                }
            }
        }
        return n <= 0;
    }
};