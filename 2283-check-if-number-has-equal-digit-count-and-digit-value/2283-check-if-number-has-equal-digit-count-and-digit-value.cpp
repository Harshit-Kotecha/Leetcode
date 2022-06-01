class Solution {
public:
    bool digitCount(string num) {
        int cnt[11] = {};
        
        for(int i = 0; i < num.length(); i++) {
            ++cnt[num[i] - '0'];
            if(cnt[i] > num[i] - '0') return 0;
        }
        cout<<cnt['1' - '0'];
        for(int i = 0; i < num.length(); i++) {
            if(cnt[i] != num[i] - '0') return 0;
        }
        
        return 1;
    }
};