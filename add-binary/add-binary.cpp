class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.length() - 1, j = b.length() - 1, s = 0, c = 0;
        string rs;
        while(i >= 0 || j >= 0) {
            //s = c;
            if(i >= 0) s += a[i--] - '0';
            if(j >= 0) s += b[j--] - '0';
            rs = to_string(s % 2) + rs;
            s /= 2;
        }
        if(s) rs = to_string(s) + rs;
        return rs;
    }
};