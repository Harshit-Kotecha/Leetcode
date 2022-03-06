class Solution {
public:
    int countStudents(vector<int>& s, vector<int>& r) {
        int i = 0, j = 0, k;
        queue<int> q;
        while(j < r.size()) {
            if(s[i] != r[j]) {
                s.push_back(s[i]);
                k = r[j];
                if(!count_if(s.begin()+i, s.end(), [&](int x){return x==k;}))
                    return r.size()-j;
            }
            else {
                j++;
            }
            i++;
        }
        return r.size() - j;
    }
};