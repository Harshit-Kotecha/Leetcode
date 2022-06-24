class Solution {
public:
    int convertTime(string c, string co) {
        int x = ((stoi(c.substr(0, 2)) * 60) + stoi(c.substr(3, 2)));
        int y = ((stoi(co.substr(0, 2)) * 60) + stoi(co.substr(3, 2)));
        
        int d = y - x; cout<< d;
        int res = 0;
        int div[4] = {60, 15, 5, 1};
        for(int i = 0; i < 4 && d > 0; i++) {
            res += d / div[i];
            d %= div[i];
        }
        return res;
    }
};