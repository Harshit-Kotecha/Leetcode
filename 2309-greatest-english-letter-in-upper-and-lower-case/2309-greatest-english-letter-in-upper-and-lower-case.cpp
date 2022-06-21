class Solution {
public:
    string greatestLetter(string s) {
        
        set<char> st(s.begin(), s.end());
        
        for(char ch = 'Z'; ch >= 'A'; ch--) {
            if(st.find(ch) != st.end() && st.find(tolower(ch)) != st.end()) {
                return string(1, ch);
            }
        }
        
        return "";
    }
};