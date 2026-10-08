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
        vector<vector<int>> res(m, vector<int>(n,-1));
        int dr[] = {0,1,0,-1};
        int dc[] = {1,0,-1,0};
        int r=0 , c=0 , di = 0;
        while(head != nullptr){
            res[r][c] = head->val;
            head = head->next;
            int nextR = r+dr[di];
            int nextC = c+dc[di];
            if(nextR < 0 || nextR >=m || nextC < 0 || nextC >= n || res[nextR][nextC] != -1){
                di = (di + 1) % 4;
                nextR = r + dr[di];
                nextC = c + dc[di];
            }
            r = nextR;
            c = nextC;
        }
        return res;
    }
};