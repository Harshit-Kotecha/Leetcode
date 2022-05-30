class Solution {
public:
    string reverseStr(string s, int k) {
        
        int i = 0;
        while(i + 2*k <= s.length()) {
            int lo = i, hi = i+k-1;
            while(lo < hi) swap(s[lo++], s[hi--]);
            i += 2*k;
        }
        if(s.length() - i >= k) {
            int lo = i, hi = i+k-1;
            while(lo < hi) swap(s[lo++], s[hi--]);
        } else if(i < s.length()) {
            int lo = i, hi = s.length()-1;
            while(lo < hi) swap(s[lo++], s[hi--]);
        }
        return s;
    }
};