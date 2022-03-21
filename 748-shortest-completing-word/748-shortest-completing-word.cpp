class Solution {
public:
    string shortestCompletingWord(string l, vector<string>& words) {
        int c1[26] = {};
        for(char c : l) {
            if(isalpha(c)) {
                c = tolower(c);
                c1[c - 'a']++;
            }
            
        }
        int len = INT_MAX;
        bool found = false;
        string res;
        for(auto s : words) {
            if(found == false || (found && s.length() < len)) {
                int c2[26] = {};
                for(char c : s) {
                    c2[c - 'a']++;
                }
                int i = 0;
                for(; i < 26; i++) {
                    if(c1[i] && c1[i] > c2[i]) {
                        break;
                    }
                }
                if(i == 26) {
                    res = s;
                    len = min(len, (int)s.length());
                    found = true;
                }
            }
        }
        return res;
    }
};