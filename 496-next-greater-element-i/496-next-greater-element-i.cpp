class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        for(int i = 0; i < nums1.size(); i++) {
            bool flag = false, sign = false;
            for(int j = 0; j < nums2.size(); j++) {
                
                if(flag && nums2[j] > nums1[i]) {
                    sign = true;
                    nums1[i] = nums2[j];
                    break;
                }
                else if(nums1[i] == nums2[j]) {
                    flag = true;
                }
            }
            if(sign == false)
                nums1[i] = -1;
        }
        return nums1;
    }
};