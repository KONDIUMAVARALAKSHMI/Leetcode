class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int n = nums.size();
        int min_diff = INT_MAX;
        sort(nums.begin(), nums.end());
        for(int i=0;i<=n-k;i++){
            int diff = nums[i+k-1] -nums[i];
            min_diff = min(min_diff, diff);
        }
        return min_diff;
    }
};