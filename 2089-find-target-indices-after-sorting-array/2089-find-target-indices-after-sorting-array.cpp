class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int n = nums.size();
        int small_cnt = 0, target_cnt = 0;
        for(int num : nums){
            if(num < target){
                small_cnt++;
            }
            else if(num == target){
                target_cnt++;
            }
        }
        vector<int> res;
        for(int i=0;i<target_cnt;i++){
            res.push_back(small_cnt + i);
        }
        return res;
    }
};