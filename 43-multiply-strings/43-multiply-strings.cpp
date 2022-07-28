class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1 == "0" || num2 == "0") return "0";
        if(num1 == "1") return num2;
        if(num2 == "1") return num1;
        if(num2.length() > num1.length()) return multiply(num2, num1);
        
        int j = num2.length() - 1, ind = 0;
        string rs;
        while(j >= 0) {
            int i = num1.length() - 1, s = 0;
            string tp;
            while(i >= 0) {
                s += ((num1[i] - '0') * (num2[j] - '0'));
                if(i > 0) tp = to_string(s%10) + tp;
                else tp = to_string(s) + tp;
                s /= 10;
                i--;
            }
            add(rs, tp, ind);
            ind++, j--;
        }
        ind = 0;
        while(rs[ind] == '0') ind++;
        //if(ind >= rs.length()) return "0";
        return rs.substr(ind, rs.length() - ind);
    }
    void add(string& rs, string& tp, int i) {
        int j = tp.length() - 1, k = rs.length(), s = 0;
        while(j >= 0 && k - i - 1 >= 0) {
            s += (rs[k - i - 1] - '0') + (tp[j] - '0');
            rs[k - i - 1] = (s%10) + '0';
            s /= 10;
            i++, j--;
        }
        while(j >= 0) {
            s += tp[j] - '0';
            rs = to_string(s % 10) + rs;
            s /= 10;
            j--;
        }
        if(s) rs = to_string(s) + rs;
    }
};