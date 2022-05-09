class Solution {
public:
    string largestGoodInteger(string num) {
        string res;
        int s = 0;
        for(int i = 0; i + 2 < num.length(); i++) {
            int cs = 3 * (num[i] - '0');
            if(num[i] == num[i+1] && num[i+1] == num[i+2] && (cs >= s)) {
                res = "";
                res += string(3, num[i]); 
                s = 3 * (num[i] - '0');
            } 
        }
        return res;
    }
};