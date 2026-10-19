class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int m = intervals.size();
        int n = intervals[0].size();
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> res;

        for(int i=0;i<m;i++){
            if(res.empty() || res.back()[1] < intervals[i][0]){
                res.push_back(intervals[i]);
            }
            else{
                res.back()[1] = max(res.back()[1] , intervals[i][1]);
            }
        }

        return res;
    }
};