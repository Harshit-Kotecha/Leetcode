class ATM {
public:
    long long bank[5] = {}, val[5] = {20, 50, 100, 200, 500};
    ATM() {
        
    }
    
    void deposit(vector<int> banknotesCount) {
        for(int i = 0; i < banknotesCount.size(); i++) {
            bank[i] += banknotesCount[i];
        }
    }
    
    vector<int> withdraw(int amount) {
        vector<int> res(5);
        
        for(int i = 4; i >= 0 && amount > 0; i--) {
            res[i] = min(bank[i], amount / val[i]);
            amount -= (res[i] * val[i]);
        }
        
        if(amount > 0) return {-1};
        
        for(int i = 0; i < 5; i++) {
            bank[i] -= res[i];
        }
        return res;
    }
};

/**
 * Your ATM object will be instantiated and called as such:
 * ATM* obj = new ATM();
 * obj->deposit(banknotesCount);
 * vector<int> param_2 = obj->withdraw(amount);
 */