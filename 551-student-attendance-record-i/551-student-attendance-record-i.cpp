class Solution {
public:
    bool checkRecord(string s) {
        int l = 0, a = 0;
        for(char c : s) {
            if(a >= 2 || l >= 3)
                return 0;
            
            if(c == 'A') {
                l = 0;
                a++;
            }
            else if(c == 'L') {
                l++;
            }
            else
                l = 0;
        }
        if(a < 2 && l < 3)
            return 1;
        return 0;
    }
};