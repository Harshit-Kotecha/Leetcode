class Solution {
public:
    int countGoodSubstrings(string s) {
        if(s.length() < 3) return 0;
        //string r = s.substr(0, 3);
        int res = 0;
        for(int i = 0; i + 3 <= s.length(); i++) {
            string r = s.substr(i, 3);
            if(set<char>(r.begin(), r.end()).size() == 3) res++; 
        }
        return res;
    }
};