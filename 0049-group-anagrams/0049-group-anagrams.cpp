class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        unordered_map<string, vector<string>> mpp;
        vector<vector<string>> res;
        for(string s : strs){
            string key = s;
            sort(key.begin(), key.end());
            mpp[key].push_back(s);
        }
        for(auto& ele : mpp){
            res.push_back(ele.second);
        }
        return res;
    }
};