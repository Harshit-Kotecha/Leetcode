class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        int len = 0;
        for(auto c : s) {
            if(c != '-') {
                s[len++] = c;
            }
        }
        int rem = len % k;
        //len /= k;
        //cout<<rem<<endl;
        //for(int i = 0; i < len; i++) cout<<s[i]<<" ";
        string res;
        for(int i = 0, j = 0; i < len; i++) {
            if(rem > 0) {
                while(rem-- > 0) {
                    res += isalpha(s[i]) ? toupper(s[i]) : s[i];
                    i++;
                }
                i--;
            } else {
                j = 0;
                while(i < len && j < k) {
                    res += isalpha(s[i]) ? toupper(s[i]) : s[i];
                    i++, j++;
                }
                i--;
            }
            res += '-';
        }
        if(res.back() == '-') res.pop_back();
        return res;
    }
};