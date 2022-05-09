class Solution {
public:
    bool isPrefixString(string s, vector<string>& w) {
        bool res = true;
        int i = 0;
        for(auto& c : w) {
            for(int j = 0; j < c.length() && res; j++) {
                if(c[j] != s[i]) res = false;
                else i++;
            }
            if(res == false || i >= s.length()) break;
        } 
        // if(i < s.length() - 1) return 0; 
        cout<<i;
        return res && i == s.length();
    }
};