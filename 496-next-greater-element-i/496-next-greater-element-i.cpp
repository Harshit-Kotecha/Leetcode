class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res = nums2;
        stack<int> st;
        for(int i = nums2.size()-1; i >= 0; i--) {
            
            while(!st.empty() && st.top() < nums2[i])
                st.pop();
            
            if(st.empty())
                res[i] = -1;
            else 
                res[i] = st.top();
            
            st.push(nums2[i]);
        }
        //for(int x : res) cout<<x<<" ";
        for(int i = 0; i < nums1.size(); i++) {
            for(int j = 0; j < nums2.size(); j++) {
                if(nums1[i] == nums2[j]) {
                    nums1[i] = res[j];
                    break;
                }
            }
        }
        return nums1;
    }
};