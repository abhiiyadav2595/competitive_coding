class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        
        int n = nums.size();

        int mn = 0;
        int mx = 0;

        for (int i = 1; i < n; i++) {
            if (nums[i] < nums[mn])
                mn = i;

            if (nums[i] > nums[mx])
                mx = i;
        }

        // Find leftmost and rightmost index
        int left = min(mn, mx);
        int right = max(mn, mx);

        // Three possible ways
        int front = right + 1;
        int back = n - left;
        int both = left + 1 + n - right;

        // Minimum deletions
        return min(front, min(back, both));
    }
};