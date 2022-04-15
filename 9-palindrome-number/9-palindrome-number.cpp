class Solution {
public:
    bool isPalindrome(int x) {
        
        if(x < 0)
            return 0;
        if(x < 9)
            return 1;
        int n = x;
        long long rx = 0;
        while (n) {
            rx = (n%10) + (rx*10);
            n /= 10;
        }
        cout<<rx;
        if((int)rx == x)
            return 1;
        
        return 0;
    }
};