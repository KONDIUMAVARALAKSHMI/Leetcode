class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> mpp;
        for(int num : nums){
            if(num % 2 == 0){
                mpp[num]++;
            }
        }
        int max_freq = 0;
        int res = -1;
        for(auto const& [key,freq] : mpp){
            if(freq > max_freq){
                max_freq = freq;
                res = key;
            }
            else if(freq == max_freq){
                if(key < res){
                    res = key;
                }
            }
        }
        return res;
    }
};