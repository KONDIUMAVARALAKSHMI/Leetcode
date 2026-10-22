class Solution {
public:
    int findLHS(vector<int>& nums) {
        int n = nums.size();
        int max_len = 0;

        unordered_map<int,int> mpp;
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }
        for(int i=0;i<n;i++){
            int x = nums[i];
            if(mpp.find(x+1) != mpp.end()){
                int len = mpp[x] + mpp[x+1];
                max_len = max(max_len, len);
            }

        }
        return max_len;
    }
};