class Solution {
public:
    bool strongPasswordCheckerII(string p) {
        if(p.length() < 8) return 0;
        bool up = 0, low = 0, d = 0, s = 0;
        for(int i = 0; i < p.length(); i++) {
            if(i > 0 && (p[i] == p[i - 1])) return 0;
            if(isdigit(p[i])) {
                d = 1;
            } else if(isalpha(p[i])) {
                if(islower(p[i])) low = 1;
                else up = 1;
            } else {
                s = 1;
            }
            //if(up && low && d && s) return 1;
        }
        return up && low && d && s;
    }
};