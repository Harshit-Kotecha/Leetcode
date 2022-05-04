class Solution {
public:
    int hammingDistance(int x, int y) {
        string a, b;
        while(x > 0) {
            a = to_string(x % 2) + a;
            x /= 2;
        } 
        while(y > 0) {
            b = to_string(y % 2) + b;
            y /= 2;
        }
        int size = max(a.length(), b.length());
        while(a.length() < size) {
            a = '0' + a;
        }
        while(b.length() < size) b = '0' + b;
        
        int res = 0;
        for(int i = 0; i < size; i++) {
            if(a[i] != b[i]) res++;
        }
        return res;
    }
};