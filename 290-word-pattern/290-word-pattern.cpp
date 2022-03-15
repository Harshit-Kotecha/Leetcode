class Solution {
public:
    bool wordPattern(string p, string s) {
        unordered_map<char, int> m1;
        unordered_map<string, int> m2;
        
        istringstream iss(s);
        int i = 0;
        while(iss >> s) {
            cout<<s<<endl;
            if((i == p.length()) || (m1[p[i]] != m2[s]))
                return 0;
            
            m1[p[i]] = m2[s] = i + 1;
            i++;
            
        }
        return i == p.length();
    }
};