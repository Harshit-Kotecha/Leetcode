class Solution {
public:
    vector<string> removeAnagrams(vector<string>& w) {
        //vector<map<char, int>> r;
        vector<string> res;
        // for(auto& s : w) {
        //     if(s.length() == 1) {
        //         res.push_back(s);
        //         continue;
        //     }
        //     map<char, int> m;
        //     bool flag = true;
        //     for(char c : s) {
        //         m[c]++;
        //     }
        //     for(auto& i : r) {
        //         if(i == m) {
        //             flag = false;
        //             break;
        //         }
        //     }
        //     if(flag) {
        //         r.push_back(m);
        //         res.push_back(s);
        //     }
        // }
        for(int i = 0; i < w.size(); i++) {
            map<char, int> m;
            for(char c : w[i]) {
                m[c]++;
            }
            res.push_back(w[i]);
            for(int j = i+1; j < w.size(); j++) {
                map<char, int> m1;
                for(char c : w[j]) {
                    m1[c]++;
                }
                i = j;
                if(m != m1) {
                    i--;
                    break;
                }
            }
            //res.push_back(w[i]);
        }
        return res;
    }
};