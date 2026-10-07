class Solution {
private:
    bool solve(vector<int>& piles, int h, int k){
        long long hrs = 0;
        for(int p : piles){
            hrs += (p+k-1) / k;
        }
        return hrs<=h;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = *max_element(piles.begin(),piles.end());
        int res = high;
        while(low <= high){
            int mid = low + (high - low)/2;
            if(solve(piles,h,mid)){
                res = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return res;
    }
};