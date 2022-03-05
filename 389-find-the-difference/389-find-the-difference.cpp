class Solution {
public:
    char findTheDifference(string s, string t) {
        char res = 'a';
        for(char c : s)
            res ^= c;
        for(char c : t)
            res ^= c;
        res ^= 'a';
        return res;
    }
};