class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int i = num.size() - 1, s = 0;
        while(i >= 0) {
            s += num[i] + (k > 0 ? k%10 : 0);
            num[i] = (s % 10);
            s /= 10;
            k /= 10;
            i--;
            if(s == 0 && k == 0) return num;
        }
        while(s || k) {
            if(k) {
                s += k%10;
                k /= 10;
            }
            num.insert(num.begin(), s%10);
            s /= 10;
        }
        return num;
        
    }
};