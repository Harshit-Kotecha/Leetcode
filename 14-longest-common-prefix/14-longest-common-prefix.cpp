class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0)
            return "";
        string res = strs[0];
        int len = strs[0].length();
        
        for(auto& s : strs) {
            int i = 0, n = min((int)s.length(), len);
            while(i < n && s[i] == res[i])
                i++;
            len = min(i, n);
        }
        return res.substr(0, len);
    }
};