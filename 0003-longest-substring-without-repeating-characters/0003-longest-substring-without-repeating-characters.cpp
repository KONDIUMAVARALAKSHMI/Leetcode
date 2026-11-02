class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        if(n==0){
            return 0;
        }
        unordered_map<char,int> mpp;
        int left = 0;
        int max_len = 0;
        for(int right = 0 ; right<n;right++){
            mpp[s[right]]++;
            if(mpp.size() != right-left+1){
                mpp[s[left]]--;
                if(mpp[s[left]] == 0){
                    mpp.erase(s[left]);
                }
                left++;
            }
            max_len = max(max_len,right-left+1); 
        }
        //left++;
        return max_len;
    }
};