class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0, candidate = 0;
        for(int x : nums){
            if(cnt <= 0 ){
                candidate = x;
            }
            if(x == candidate){
                cnt++;
            }
            else {
                cnt--;
            }
        }
        cnt = 0;
        for(int x : nums){
            if(x == candidate){
                cnt++;
            }
        }
        if(cnt > n/2) return candidate;
        return -1;
    }
};