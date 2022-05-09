class Solution {
public:
    string largestOddNumber(string num) {
        if(num.back() & 1) return num;
        string res;
        int lo = 0, hi = -1;
        for(int i = 0; i < num.length(); i++) {
            // if(lo == -1 && num[i] & 1) {
            //     //lo = i;
            //     hi = i;
            // } else 
            if(num[i] & 1) {
                hi = i;
            }
        }
        if(hi == -1) return "";
        // cout<<string(&num[lo], &num[hi+1]);
        return string(&num[lo], &num[hi+1]);
        // return res;
    }
};