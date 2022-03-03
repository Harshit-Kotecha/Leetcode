class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        
        vector<int> res = nums;
        stack<int> st;
        
        for(int i = nums.size()-1; i >= 0; i--) {
            
            while(!st.empty() && nums[i] >= st.top())
                st.pop();
            
            if(st.empty())
                res[i] = -1;
            else
                res[i] = st.top();
            
            st.push(nums[i]);
        }
        for(int i = nums.size()-1; i >= 0; i--) {
            
            while(!st.empty() && nums[i] >= st.top())
                st.pop();
            
            if(!st.empty())
                res[i] = st.top();
            else
                res[i] = -1;
            
            st.push(nums[i]);
        }
        return res;
    }
};