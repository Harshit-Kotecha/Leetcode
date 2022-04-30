class Solution {
public:
    vector<int> constructRectangle(int area) {
        long long l = area, w = 1;
        int r1 = area, r2 = 1;
        while(l >= w) {
            if(l * w == area) {
                r1 = l, r2 = w;
                l--, w++;
            } else if(l * w > area) {
                l--;
            } else {
                w++;
            }
        }
        return {r1, r2};
    }
};