class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1.length() != s2.length())
            return 0;
        if(s1 == s2)
            return 1;
        int c1[26] = {}, c2[26] = {};
        for(int i = 0; i < s1.length(); i++) {
            c1[s1[i] - 'a']++;
            c2[s2[i] - 'a']++;
        }
        if(!equal(begin(c1), end(c1), begin(c2)))
            return 0;
        
        int diff = 0;
        for(int i = 0; i < s1.length(); i++) {
            if(s1[i] != s2[i])
                diff++;
        }
        return diff == 2;
    }
};