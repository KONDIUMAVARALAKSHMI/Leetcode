class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        string res = "";
        if(sum > num*9){
            return "";
        }
        int a = sum/9;
        for(int i=0;i<a;i++){
            res += '9';
        }
        int b = sum % 9;
        if(b > 0){
            res += to_string(b);
        }
        while(res.size() < num){
            res += '0';
        }
        return res;
    }
};