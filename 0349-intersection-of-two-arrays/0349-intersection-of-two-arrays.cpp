class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int > res , vecc;
        int n = nums1.size();
        int m = nums2.size();

        for(int i = 0;i<n ;i++){
            for(int j = 0;j< m ;j++){
                if(nums1[i] == nums2[j]){
                    res.push_back(nums1[i]);
                    break;
                }
            }
        }
        set<int> s(res.begin() , res.end());

        for(auto x : s){
            vecc.push_back(x);
        }
        return vecc;

    }
};