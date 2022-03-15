class Solution {
public:
    vector<string> findRestaurant(vector<string>& l1, vector<string>& l2) {
        unordered_map<string, int> map, pre;
        
        int i = 0, j = 0;
        while(i < l1.size() || j < l2.size()) {
            if(i < l1.size()) {
                map[l1[i]] += i;
                pre[l1[i]]++;
            }
            if(j < l2.size()) {
                map[l2[j]] += j;
                pre[l2[j]]--;
            }
            
            i++, j++;
        }
        
        int mini = INT_MAX;
        vector<string> res;
        for(auto& p : pre) {
            if(p.second == 0) {
                if(map[p.first] <mini) {
                    mini = map[p.first];
                    res.clear();
                    res.push_back(p.first);
                }
                else if(map[p.first] == mini)
                    res.push_back(p.first);

            }
        }
         
        return res;
        
    }
};