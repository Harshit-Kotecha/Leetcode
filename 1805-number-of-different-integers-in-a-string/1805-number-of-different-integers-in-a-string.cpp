class Solution {
public:
    int numDifferentIntegers(string s) {
        unordered_set<string> set;
        for(int i = 0; i < s.length(); i++) {

            if(isdigit(s[i])) {
                int j = i, k = i;
                while(k < s.length() && isdigit(s[k])) {
                    if(j == k && s[k] == '0') {
                        j++;
                        continue;
                    }
                    k++;
                }
                set.insert(s.substr(j, k-j));
                i = k-1;
            }
            
        }
        for(auto x : set)
            cout<<x<<" ";
        return set.size();
    }
};