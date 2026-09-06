class Solution {
public:
    vector<vector<int>> ans;

    void solve(vector<int>& a, int target, int i, vector<int>& temp) {
        if (target == 0) {
            ans.push_back(temp);
            return;
        }

        for (int j = i; j < a.size(); j++) {
            if (a[j] > target) break;

            temp.push_back(a[j]);
            solve(a, target - a[j], j, temp);
            temp.pop_back();
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<int> temp;
        solve(candidates, target, 0, temp);
        return ans;
    }
};