class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> res(s.length());
        for(int i = 0, ind = INT_MAX; i < s.length(); i++) {
            if(s[i] == c) {
                ind = i;
            }
            res[i] = abs(ind - i);
        }
        for(int i = s.length() - 1, ind = INT_MAX; i >= 0; i--) {
            if(s[i] == c) ind = i;
            
            res[i] = min(res[i], abs(ind - i));
        }
        return res;
    }
};