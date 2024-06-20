/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
      if (p == NULL && q == NULL) {
            return true;
        }  
      if (p == NULL || q == NULL) {
            return false;
        }
        if (p->val != q->val) {
            return 0;
        }
        bool Left = isSameTree(p->left, q->left);
        bool Right = isSameTree(p->right, q->right);
        return Left && Right; 
    }
};

// solution
空節點的判斷、節點上的值必須相同、左右節的值(或為空)也必須相同
