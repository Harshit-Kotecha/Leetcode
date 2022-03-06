class Solution {
public:
    string freqAlphabets(string s) {
        int k = 0;
        for(int i = 0; i < s.length(); i++) {
            if(i+2 < s.length() && s[i+2] == '#') {
                int x = ((s[i] - '0') * 10) + (s[i+1] - '0');
                s[k++] = ('a' + x - 1);
                i += 2;
            }
            else {
                s[k++] = ('a' + (s[i] - '0') - 1);
            }
        }
        
        return s.substr(0, k);
    }
};