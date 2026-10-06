class Solution {
public:
    int minAddToMakeValid(string s) {
        int open_cnt = 0, close_cnt = 0;
        int n = s.size();
        for(int i=0;i<n;i++){
            if(s[i] == '('){
                open_cnt++;
            }else if(s[i] == ')' && open_cnt > 0){
                open_cnt--;
            }
            else{
                close_cnt++;
            }
        }
        return open_cnt + close_cnt;
        
    }
};