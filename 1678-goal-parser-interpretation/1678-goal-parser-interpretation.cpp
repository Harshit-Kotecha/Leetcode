class Solution {
public:
    string interpret(string s) {
        int k = 0;
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == 'G')
                s[k++] = 'G';
            else if(s[i] == '(' && s[i+1] == ')') {
                s[k++] = 'o';
                i++;
            }
            else {
                s[k++] = 'a';
                s[k++] = 'l';
                i += 3;
            }
        }
        return s.substr(0, k);
    }
};