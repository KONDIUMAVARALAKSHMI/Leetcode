class Solution {
public:
    string removeOuterParentheses(string s) {
        int n = s.size();
        int oc = 0;
        string res = "";
        for(int i=0;i<n;i++){
            if(s[i] == '('){
                oc++;
                if(oc > 1){
                    res += s[i];
                }
            }
            else{
                if(oc > 1){
                    res += s[i];
                }
                oc--;
            }
        }
        return res;
    }
};