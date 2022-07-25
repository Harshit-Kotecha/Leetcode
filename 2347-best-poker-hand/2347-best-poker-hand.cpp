class Solution {
public:
    string bestHand(vector<int>& r, vector<char>& s) {
        if(set<char>(s.begin(), s.end()).size() == 1) return "Flush";
        
        if(set<int>(r.begin(), r.end()).size() == r.size()) return "High Card";
        
        unordered_map<int, int> m;
        for(auto& i : r) {
            if(++m[i] == 3) return "Three of a Kind";
        }
        
        return "Pair";
    }
};