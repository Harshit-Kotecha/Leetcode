class Solution {
public:
    int countValidWords(string s) {
        istringstream iss(s);
        int res = 0;
        while(iss >> s) {
            // cout<<s<<" ";
            bool valid = true;
            int hy = 0, p = 0;
            for(int i = 0; i < s.length() && valid; i++) {
                if(isdigit(s[i])) {
                    valid = false;
                } else if(s[i] == '-') {
                    hy++;
                    if(hy <= 1 && i > 0 && i < s.length()-1 && isalpha(s[i-1]) && isalpha(s[i+1]) && islower(s[i-1]) && islower(s[i+1])) {
                        continue;
                    } else {
                        valid = false;
                    }
                } else if(!isalpha(s[i])) {
                    p++;
                    if(p > 1 || i != s.length() - 1)
                        valid = false;
                }
            }
            if(valid) res++;
        }
        return res;
    }
};