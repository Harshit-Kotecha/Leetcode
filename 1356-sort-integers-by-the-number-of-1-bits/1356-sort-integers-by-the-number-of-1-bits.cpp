class Solution {
public:
    vector<int> sortByBits(vector<int>& nums) {
        sort(nums.begin(), nums.end(), [&](int a, int b) {
            int countA = bitset<32>(a).count();
            int countB = bitset<32>(b).count();
            if(countA != countB) 
                return countA < countB;
            return a < b;
        });
        return nums;
         
    }
};