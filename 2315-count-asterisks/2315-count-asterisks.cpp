class Solution {
public:
    int countAsterisks(string s) {
        bool c = 0;
        int res = 0;
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == '|') {
                c = !c;
            } else if(!c && s[i] == '*') {
                res++;
            }
        }
        return res;
    }
};