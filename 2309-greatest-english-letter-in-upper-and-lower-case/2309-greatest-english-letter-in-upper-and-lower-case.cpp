class Solution {
public:
    string greatestLetter(string s) {
        string res;
        
        set<char> st(s.begin(), s.end());
        
        for(auto c : s) {
            
            if(res.size() && res[0] > toupper(c)) continue;
            
            if(st.find(tolower(c)) != st.end() && st.find(toupper(c)) != st.end()) {
                if(res.size()) {
                    if(toupper(c) > res[0]) res = toupper(c);
                } else {
                    res = toupper(c);
                }
            }
        }
        
        return res;
    }
};