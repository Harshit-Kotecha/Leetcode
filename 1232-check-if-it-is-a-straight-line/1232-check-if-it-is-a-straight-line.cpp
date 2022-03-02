class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& c) {
        float m, m1;
        if((c[1][0] - c[0][0]) == 0)
            m = INT_MIN;
        else
            m = (float)(c[1][1] - c[0][1]) / (c[1][0] - c[0][0]);
        for(int i = 1; i < c.size(); i++) {
            
            if((c[i][0] - c[i-1][0]) == 0)
                m1 = INT_MIN;
            else
                m1 = (float)(c[i][1] - c[i-1][1]) / (c[i][0] - c[i-1][0]);
            
            if(m != m1)
                return 0;
        }
        
        return 1;
    }
};