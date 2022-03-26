class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        string sub = str[0];
        
        for(auto& s : str) {
            if(sub == "") return sub;
            if(sub == s) continue;
            int i;
            for(i = 0; i < s.length(); i++) {
                if(sub[i] != s[i]) {
                    sub = s.substr(0, i);
                    break;
                }
            }
            if(i == s.length()) {
                sub = s.substr(0, i);
            }
        }
        
        return sub;
    }
};