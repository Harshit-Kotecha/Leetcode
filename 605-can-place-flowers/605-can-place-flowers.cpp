class Solution {
public:
    bool canPlaceFlowers(vector<int>& f, int n) {
        if(n == 0) return 1;
        if(f.size() == 1) {
            return f[0] == 0 && n == 1;
        }
        for(int i = 0; i < f.size() && n > 0; i++) {
            if(i == 0 && f[i]==0 && f[i+1] == 0) {
                n--;
                //i++;
            } else if(f[i] == 0 && i+2 < f.size()){
                if(f[i]==0 && f[i+1]==0 && f[i+2]==0) {
                    n--;
                    i++;
                }
            } 
            else if(i == f.size() - 2 && f[i] == 0 && f[i+1] == 0) {
                n--;
                i++;
            } 
        }
        return n == 0;
    }
};