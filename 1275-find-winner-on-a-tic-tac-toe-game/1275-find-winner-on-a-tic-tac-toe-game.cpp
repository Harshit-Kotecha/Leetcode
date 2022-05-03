class Solution {
public:
    string tictactoe(vector<vector<int>>& m) {
        set<int> a, b;
        for(int i = 0; i < m.size(); i++) {
            if(i & 1) {
                b.insert(3*m[i][0] + m[i][1] + 1);
            } else {
                a.insert(3*m[i][0] + m[i][1] + 1);
            }
        }
        // for(int i : a) cout<< i <<" ";
        if((a.count(1) && a.count(5) && a.count(9)) || (a.count(3) && a.count(5) && a.count(7))) {
            return "A";
        } 
        else if((b.count(1) && b.count(5) && b.count(9)) || (b.count(3) && b.count(5) && b.count(7))) {
            return "B";
        } 
        for(auto& i : a) { 
            if((i == 1 || i == 4 || i == 7) && (a.count(i + 1) && a.count(i + 2))) {
                return "A";
            } 
            if((i == 1 || i == 2 || i == 3) && (a.count(i + 3) && a.count(i + 6))) {
                return "A";
            }
        }
        for(auto& i : b) {
            if((i == 1 || i == 4 || i == 7) && (b.count(i + 1) && b.count(i + 2))) {
                return "B";
            } 
            if((i == 1 || i == 2 || i == 3) && (b.count(i + 3) && b.count(i + 6))) {
                return "B";
            }
        }
        if(a.size() + b.size() == 9)
                return "Draw";
                
        return "Pending";
    }
};