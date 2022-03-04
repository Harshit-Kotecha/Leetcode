class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        
        int res = 0;
        for(auto s : words) {
            int j = 0;
            for(int i = 0; i < s.length() && j < pref.length(); i++, j++) {
                if(s[i] != pref[j])
                    break;
            }
            res = j == pref.length() ? ++res : res;
        }
        return res;
    }
};