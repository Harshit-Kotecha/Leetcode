class Solution {
public:
    bool isSameAfterReversals(int num) {
        if(num == 0)
            return 1;
        return num%10 != 0;
    }
};