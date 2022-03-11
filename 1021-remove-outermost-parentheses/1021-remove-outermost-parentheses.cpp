class Solution {
public:
    string removeOuterParentheses(string s) {
        int open = 0, k = 0;
        for(auto c : s) {
            if(c == '(') {
                open++;
                if(open > 1)
                    s[k++] = c;
            }
            else {
                open--;
                if(open > 0)
                    s[k++] = c;
            }
        }
        return s.substr(0, k);
    }
};