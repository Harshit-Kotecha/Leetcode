class Solution {
public:
    string toLowerCase(string s) {
        for(char& st : s)
            if(isupper(st))
                st = (int)st + 32;
        return  s;
    }
};