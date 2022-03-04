class Solution {
public:
    int isPrefixOfWord(string s, string w) {
        int word = 0;
        istringstream iss(s);
        while(iss >> s) {
            word++;
            int j = 0;
            for(int i = 0; i < s.length()&&j<w.length(); i++, j++)
                if(s[i] != w[j])
                    break;
            if(j == w.length())
                return word;
        }
        return -1;
    }
};