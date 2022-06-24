class Solution {
public:
    int convertTime(string c, string co) {
        int x = ((stoi(c.substr(0, 2)) * 60) + stoi(c.substr(3, 2)));
        int y = ((stoi(co.substr(0, 2)) * 60) + stoi(co.substr(3, 2)));
        
        int d = y - x; cout<< d;
        int res = 0;
        res += d / 60;
        d %= 60;
        res += d / 15;
        d %= 15;
        res += d / 5;
        d %= 5;
        res += d;
        return res;
    }
};