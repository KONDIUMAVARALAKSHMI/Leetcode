/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> res(m, vector<int> (n,-1));
        
        int dr[] = {0,1,0,-1};
        int dc[] = {1,0,-1,0};
        int r = 0;
        int c = 0;
        int di = 0;
        while(head != nullptr){
            res[r][c] = head->val;
            head = head->next;
            int nxtR = r + dr[di];
            int nxtC = c + dc[di];
            if(nxtR < 0 || nxtR >= m || nxtC < 0 || nxtC >= n || res[nxtR][nxtC] != -1){
                di = (di + 1) % 4;
                nxtR = r + dr[di];
                nxtC = c + dc[di];

            } 
            r = nxtR;
            c = nxtC;
        }
        return res;
    }
};