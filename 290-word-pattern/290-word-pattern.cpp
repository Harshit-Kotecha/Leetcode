class Solution {
public:
    bool wordPattern(string p, string s) {
        unordered_map<string, int> m2;
        int cnt[26] = {};
        int i = 0, n = p.length();
        istringstream iss(s);
        while(iss >> s) {
            if(i == n || cnt[p[i] - 'a'] != m2[s])
                return 0;
            
            cnt[p[i] - 'a'] = m2[s] = i + 1;
            i++;
        }
        
        return i == n;
    }
};