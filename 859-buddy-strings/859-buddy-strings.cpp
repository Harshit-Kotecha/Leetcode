class Solution {
public:
    bool buddyStrings(string a, string b) {
        if(a.length() != b.length())
            return 0;
        if(a == b) {
            set<char> s(a.begin(), a.end());
            if(s.size() < a.length()) // duplicate char which can be swapped
                return 1;
            else
                return 0;
        }
        vector<int> diff;
        for(int i = 0; i < a.length(); i++) {
            if(a[i] != b[i]) 
                diff.push_back(i);
        }  
        if(diff.size() == 2 && a[diff[0]] == b[diff[1]] && a[diff[1]] == b[diff[0]])
            return 1;
        else 
            return 0;
        
        
    }
};