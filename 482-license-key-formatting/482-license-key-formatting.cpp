class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        int len = 0;
        for(auto c : s) {
            if(c != '-') {
                s[len++] = c;
            }
        }
        int rem = len % k, i = 0;
        string res;

        while(rem-- > 0) {
            res += isalpha(s[i]) ? toupper(s[i]) : s[i];
            i++;
        }
        if(res.size()) res += '-';
        while(i < len) {
            int j = 0;
            while(i < len && j < k) {
                res += isalpha(s[i]) ? toupper(s[i]) : s[i];
                i++, j++;
            }
            res += '-';
        }
        if(res.back() == '-') res.pop_back();
        return res;
    }
};