class Solution {
public:
    int minInsertions(string s) {
        int n = s.size();
        int oc = 0, cc = 0;
        for(int i=0;i<n;i++){
            if(s[i] == '('){
                oc++;
            }
            else if(i+1 < n && s[i] == ')' && s[i+1] ==')'){
                if(oc > 0){
                    oc--;
                    i++;
                }
                else{
                    cc++;
                    i++;
                }
            }
            else{
                if(oc > 0){
                    oc--;
                    cc++;
                }else{
                    cc += 2;
                }
            }
        }
        return cc+oc*2;
    }
};