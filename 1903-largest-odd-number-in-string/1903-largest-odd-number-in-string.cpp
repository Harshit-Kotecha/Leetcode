class Solution {
public:
    string largestOddNumber(string num) {
        if(num.back() & 1) return num;
        int hi = -1;
        for(int i = 0; i < num.length(); i++) {
            if(num[i] & 1) {
                hi = i;
            }
        }
        if(hi == -1) return "";
        return string(&num[0], &num[hi+1]);
    }
};