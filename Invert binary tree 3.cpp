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
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL){
            return nullptr;
        }
        stack<TreeNode*>s;
        s.push(root);
        while(!s.empty()){
            TreeNode* node=s.top();
            s.pop();
            swap(node->left,node->right);
            if(node->left)s.push(node->left);
            if(node->right)s.push(node->right);

        }return root;
        
        return root;
    }
    
    };
