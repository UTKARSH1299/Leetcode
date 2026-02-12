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
    // int maxSumBST(TreeNode* root) {

        int ans = 0;

        vector<int>dfs(TreeNode* root){
            if(root==NULL)
                return {1, INT_MAX,INT_MIN,0};

            auto left=dfs(root->left);
            auto right=dfs(root->right);

            if(left[0]==1&&right[0]==1&& root->val>left[2]&&root->val<right[1]){
                int sum=left[3]+right[3]+root->val;

                ans=max(ans,sum);

                return {
                    1,min(root->val,left[1]),
                    max(root->val,right[2]),
                    sum
                };
            }
            return {0,0,0,0};
        }

        int maxSumBST(TreeNode* root){
            dfs(root);
            return ans;
        }
        
    
};