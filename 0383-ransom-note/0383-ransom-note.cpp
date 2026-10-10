class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int m = ransomNote.size();
        int n = magazine.size();
        int freq1[26] = {0};
        for(char ch : magazine){
            freq1[ch-'a']++;
        }
        for(char ch : ransomNote){
            if(freq1[ch-'a'] == 0){
                return false;
            }
            freq1[ch-'a']--;
        }
        return true;
        
    }
};