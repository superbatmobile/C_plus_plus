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