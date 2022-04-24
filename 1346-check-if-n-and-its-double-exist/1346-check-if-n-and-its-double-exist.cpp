class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        set<int> s;
        for(int x : arr) {
            if(s.find(2*x) != s.end() || (x%2 == 0 && s.find(x / 2) != s.end()))
                return 1;
            s.insert(x);
        }
        return 0;
    }
};