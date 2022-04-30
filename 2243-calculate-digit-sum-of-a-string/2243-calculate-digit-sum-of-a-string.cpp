class Solution {
public:
    string digitSum(string s, int k) {
        int len = s.length();
        string r = s;
        while(len > k) {
            r = "";
            for(int i = 0; i < len; i += k) {
                int t = 0;
                for(int j = i; j - i < k && j < len; j++) {
                    t += (s[j] - '0');
                }
                r += to_string(t);
            }
            len = r.length();
            s = r;
        }
        return r;
        
    }
};