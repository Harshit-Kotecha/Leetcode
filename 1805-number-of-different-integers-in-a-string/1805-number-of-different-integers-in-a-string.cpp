class Solution {
public:
    int numDifferentIntegers(string s) {
        set<string> set;
        for(int i = 0; i < s.length(); i++) {

            if(isdigit(s[i])) {
                string x;
                while(i < s.length() && isdigit(s[i])) {
                    if(x.length() == 0 && s[i] == '0') {
                        i++;
                        continue;
                    }
                    x += s[i];
                    i++;
                }
            set.insert(x);
            }
            
        }
        for(auto x : set)
            cout<<x<<" ";
        return set.size();
    }
};