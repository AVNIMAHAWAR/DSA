 /* Definition for a binary tree node.**/
#include<bits/stdc++.h>
 using namespace std;
    struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
       TreeNode(int val) : val(val) , left(nullptr) , right(nullptr) {}
  };
class Solution {
public:
    int maxi = 0; // store max diameter

    int height(TreeNode* root) {
        if (!root) return 0;
        return 1 + max(height(root->left), height(root->right));
    }

    void helper(TreeNode* root) {
        if (!root) return;

        int lh = height(root->left);
        int rh = height(root->right);

        maxi = max(maxi, lh + rh);

        helper(root->left);
        helper(root->right);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        maxi = 0; 
        helper(root);
        return maxi;
    }
};
