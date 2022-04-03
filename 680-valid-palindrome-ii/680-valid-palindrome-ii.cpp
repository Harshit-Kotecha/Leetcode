class Solution {
public:
    bool validPalindrome(string s) {
        
        int i = 0, j = s.length()-1, k = 0;
        while(i < j && k <= 1) {
            if(s[i] != s[j]) {
                k++, i++;
            }
            else 
                i++, j--;
        }
        if(k <= 1) return 1;
        i = 0, j = s.length()-1, k = 0;
        while(i < j && k <= 1) {
            if(s[i] != s[j]) {
                k++, j--;
            }
            else 
                i++, j--;
        }
        if(k <= 1) return 1;
        return 0;
    }
};