class Solution {
public:
    string addStrings(string num1, string num2) {
        if(num1.length() < num2.length()) return addStrings(num2, num1);
        
        int i = num1.length() - 1, j = num2.length() - 1, s = 0;
            
        while(i >= 0) {
            s += num1[i] - '0';
            if(j >= 0) s += num2[j] - '0';
            num1[i] = (s % 10) + '0';
            s /= 10;
            i--, j--;
        }
        
        if(s) return to_string(s) + num1;
        return num1;
    }
};