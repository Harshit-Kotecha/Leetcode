class Solution {
public:
    bool squareIsWhite(string c) {
        
        return (((c[1] - '0') + (c[0] - 'a')) % 2 == 0);
        
    }
};