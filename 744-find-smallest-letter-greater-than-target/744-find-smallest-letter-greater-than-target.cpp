class Solution {
public:
    char nextGreatestLetter(vector<char>& l, char target) {
       int lo = 0, hi = l.size(), mid;
        while(lo < hi) {
            mid = lo + (hi - lo) / 2;
            if(target >= l[mid])
                lo = mid + 1;
            else
                hi = mid;
        }
        if(l[lo] == target) lo++;
        cout<<lo;
        return l[lo % l.size()];
    }
};