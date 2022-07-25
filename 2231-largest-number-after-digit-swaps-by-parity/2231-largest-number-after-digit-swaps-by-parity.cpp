class Solution {
public:
    int largestInteger(int num) {
        string s = to_string(num);
        vector<int> e, o;
        for(int i = 0; i < s.length(); i++) {
            if(s[i] - '0' & 1) o.push_back(s[i] - '0');
            else e.push_back(s[i] - '0');
        }
        sort(e.begin(), e.end(), greater<int>());
        sort(o.begin(), o.end(), greater<int>());
        for(int i = 0, j = 0, k = 0; i < s.length(); ++i) {
            if(s[i] - '0' & 1) s[i] = o[j++] + '0';
            else s[i] = e[k++] + '0';
        }
        return stoi(s);
    }
};