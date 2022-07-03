class Solution {
public:
    string decodeMessage(string key, string m) {
        unordered_map<char, char> c;
        int cnt = 0;
        for(int i = 0; i < key.length(); i++) {
            if(isalpha(key[i]) && c.find(key[i]) == c.end()) {
                c[key[i]] = cnt + 'a';
                cnt++;
            } 
        }
        
        for(int i = 0; i < m.length(); i++) {
            if(isalpha(m[i])) {
                m[i] = c[m[i]];
            }
        }
        
        return m;
    }
};