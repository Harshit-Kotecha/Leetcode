class Solution {
public:
    bool checkIfExist(vector<int>& a) {
        sort(a.begin(), a.end());
        for(int i = 0; i < a.size(); i++) {
            //if(2*a[i] > a.back()) return 0;
            int t = 2*a[i], lo = i + 1, hi = a.size() - 1, mid;
            if(a[i] < 0) {
                if(a[i] & 1) continue;
                else t = a[i] / 2;
            }
            while(lo < hi) {
                mid = lo + (hi - lo) / 2;
                if(t > a[mid])
                    lo = mid + 1;
                else
                    hi = mid;
            }
            if(lo < a.size() && a[lo] == t) {cout<<a[lo]; return 1; }
        }
        return 0;
    }
};