class Solution {
public:
    string decodeMessage(string key, string m) {
        int c[26] = {};
        int cnt = 0;
        for(int i = 0; i < key.length(); i++) {
            if(isalpha(key[i]) && c[key[i] - 'a'] == 0) {
                c[key[i] - 'a'] = ++cnt;
                //cnt++;
            } 
        }
        
        for(int i = 0; i < m.length(); i++) {
            if(isalpha(m[i])) {
                m[i] = c[m[i] - 'a'] + 'a' - 1;
            }
        }
        
        return m;
    }
};