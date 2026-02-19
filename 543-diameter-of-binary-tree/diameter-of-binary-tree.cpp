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
int maxdia;
    int diameterOfBinaryTree(TreeNode* root) {
        dfs(root);
        return maxdia;
    }


    int dfs(TreeNode* currNode){
    //1-base case
        if(currNode==NULL){
            return 0;
        }

    // left side post oreder
       int l= dfs(currNode->left);
       int r=dfs(currNode->right);

    

       maxdia=max(maxdia,l+r);


       return max(l,r)+1;

    }
};