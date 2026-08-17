class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        sort(piles.begin(), piles.end());
        int left = 1;
        int right = piles[n - 1];
        int ans = right;
        while (left <= right) {
            int k = left + (right - left) / 2;
            long long a = 0;
            for (int i = 0; i < n; i++) {
                a += ceil((double)piles[i] / k);
            }
            if (a <= h) {
                ans = k;
                right = k - 1;
            } else {
                left = k + 1;
            }
        }
        return ans;
    }
};