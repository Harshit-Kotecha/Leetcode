class Solution {
public:
    int romanToInt(string s) {
        int res = 0;
        map<char, int> m {
            {'I', 1},
            {'V', 5}, 
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        
        for(int i = 0; i < s.length(); i++) {
            cout<<m[s[i+1]]<<" ";
            // if(i+1 < s.length()) {
                if(m[s[i+1]] - m[s[i]] > 0) {
                    res += m[s[i+1]] - m[s[i]];
                    i++;
                    continue;
                }
            // }
            res += m[s[i]];
        }
        return res;
    }
};