class Solution {
public:
    bool isHappy(int n) {
        int slow = n, fast = n;
        while(fast != 1) {
            slow = sum(slow);
            fast = sum(fast);
            fast = sum(fast);
            if(slow != 1 && slow == fast)
                return 0;
            
        }
        return 1;
    }
    int sum(int n) {
        int s = 0;
        while(n) {
            s += (n%10)*(n%10);
            n /= 10;
        }
        return s;
    }
};