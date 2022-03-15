class Solution {
public:
    int findComplement(int num) {
        string s;
        int n = num;
        while(n) {
            s += to_string(n%2);
            n /= 2;
        }
        int res = 0;
        for(int i = s.length()-1; i >= 0; i--) {
            if(s[i] == '0') {
                res += pow(2, i);
            }
        }
        return res;
    }
};