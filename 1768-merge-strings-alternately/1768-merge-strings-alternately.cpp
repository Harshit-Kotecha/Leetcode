class Solution {
public:
    string mergeAlternately(string w1, string w2) {
        int i = 0, j = 0;
        string res;
        while(i < w1.length() && j < w2.length()) {
            res += w1[i++];
            res += w2[j++];
        }
        while(i < w1.length())
            res += w1[i++];
        while(j < w2.length())
            res += w2[j++];
        
        return res;
    }
};