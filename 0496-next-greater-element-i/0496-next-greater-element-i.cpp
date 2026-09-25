class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_map<int, int> mp;
        
        for (int i = 0; i < nums2.size(); i++) {
            
            int greater = -1;
            
            for (int j = i + 1; j < nums2.size(); j++) {
                if (nums2[j] > nums2[i]) {
                    greater = nums2[j];
                    break;
                }
            }
            
            mp[nums2[i]] = greater;
        }

        vector<int> ans;
        
        for (int x : nums1) {
            ans.push_back(mp[x]);
        }
        
        return ans;
    }
};