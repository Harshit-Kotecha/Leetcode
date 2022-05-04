class Solution {
public:
    bool checkIfExist(vector<int>& a) {
        set<int> s;
        for(int i : a) {
            if(s.count(2*i) || (i%2 == 0 && s.count(i / 2)))
                return 1;
            s.insert(i);
        }
        return 0;
    }
};