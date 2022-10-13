class Solution {
public:
    int hardestWorker(int n, vector<vector<int>>& l) {
        int id = l[0][0], dur = l[0][1];
        for(int i = 1; i < l.size(); i++) {
            if(l[i][1] - l[i-1][1] > dur) {
                dur = l[i][1] - l[i-1][1];
                id = l[i][0];
            } else if(dur == l[i][1] - l[i-1][1]) {
                id = min(id, l[i][0]);
            }
        }
        return id;
    }
};