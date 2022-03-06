class Solution {
public:
    int timeRequiredToBuy(vector<int>& t, int k) {
        int res = 0;
        while(t[k]) {
            for(int i = 0; i < t.size(); i++) {
                if(t[i]) {    
                    t[i]--;
                    res++;
                }
                if(t[k] == 0)
                    break;
            }
        }
        return res;
    }
};