class Solution {
public:
    string addBinary(string a, string b) {
        if(b.length() > a.length()) return addBinary(b, a);
        
        int t = 0;
        int i = a.length() - 1, j = b.length() - 1;
        
        while(i >= 0 && j >= 0) {
            if(a[i] == '1' && b[j] == '1') {
                if(t == 1) {
                    a[i] = '1';
                    t = 1;
                } else {
                    a[i] = '0';
                    t = 1;
                }
            } else if(a[i] == '1' || b[j] == '1') {
                if(t == 1) {
                    a[i] = '0';
                } else {
                    a[i] = '1';
                }
            } else {
                if(t == 1) {
                    a[i] = '1';
                    t = 0;
                }
            }
            i--, j--;
        }
        while(i >= 0) {
            if(a[i] == '1') {
                if(t == 0) {
                    a[i] = '1';
                } else {
                    a[i] = '0';
                }
            } else {
                if(t == 0) {
                    a[i] = '0';
                } else {
                    a[i] = '1';
                    t = 0;
                }
            }
            i--;
        }
        if(t) a = '1' + a;
        return a;
    }
};