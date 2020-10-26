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
    bool isValidBST(TreeNode* root) {
        stack<TreeNode*> st;
        TreeNode *pre=NULL;
        TreeNode* p=root;
        while(p || !st.empty()){
            while(p){
                st.push(p);
                p=p->left;
            }
            p=st.top();
            st.pop();
            if(pre && p->val<=pre->val){
                return false;
            }
            pre=p;
            p=p->right;
        }
        return true;
        
    }
};