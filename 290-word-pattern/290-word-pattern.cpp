class Solution {
public:
    bool wordPattern(string p, string s) {
        unordered_map<char, int> m1;
        unordered_map<string, int> m2;
        
        int i = 0, n = p.length();
        istringstream iss(s);
        while(iss >> s) {
            if(i == n || m1[p[i]] != m2[s])
                return 0;
            
            m1[p[i]] = m2[s] = i + 1;
            i++;
        }
        
        return i == n;
    }
};