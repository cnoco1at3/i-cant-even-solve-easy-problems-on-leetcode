/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* helper(struct TreeNode* root, int* k) {
    if(!root) return NULL;
    struct TreeNode* cur = helper(root->left, k);
    if(cur) return cur;
    if((--(*k)) == 0) return root;
    cur = helper(root->right, k);
    if(cur) return cur;
    return NULL;
}

int kthSmallest(struct TreeNode* root, int k) {
    return helper(root, &k)->val;
}