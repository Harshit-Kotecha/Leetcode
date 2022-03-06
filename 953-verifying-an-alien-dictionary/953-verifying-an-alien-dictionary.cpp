class Solution {
public:
    bool isAlienSorted(vector<string>& s, string o) {
        unordered_map<char, int> map;
        for(int i = 0; i < o.size(); i++) {
            map[o[i]] = i;
        }
        for(int i = 1, j = 0; i < s.size(); i++) {
            for(j = 0; j < s[i].length(); j++) {
                if(s[i-1][j] == s[i][j])
                    continue;
                if(map[s[i-1][j]] < map[s[i][j]])
                    break;
                else
                    return 0;
            }
            if(j == s[i].length() && s[i-1].length() > s[i].length())
                return 0;
        }
        return 1;
    }
};