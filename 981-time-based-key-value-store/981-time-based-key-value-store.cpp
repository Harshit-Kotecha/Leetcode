class TimeMap {
public:
    unordered_map<string, set<int>> m1;
    unordered_map<int, string> m2;
    TimeMap() {
        
    }
    
    void set(string k, string v, int t) {
        m1[k].insert(t);
        m2[t] = v;
    }
    
    string get(string key, int t) {
        if(m1.find(key) == m1.end()) return "";
        
        
        std::set<int>::reverse_iterator it = m1[key].rbegin();
        while(it != m1[key].rend() && *it > t) {
            it++;
        }
        return it == m1[key].rend() ? "" : m2[*it];
        
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */