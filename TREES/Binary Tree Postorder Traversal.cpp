class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
          vector<int> ans;
        if(root== NULL) return ans;
        stack<TreeNode*> st;
        
        st.push(root);
        
        while(!st.empty()){
            
           TreeNode* node= st.top();       
            
            ans.push_back(node->val);
            st.pop();
        
            
            if(node->left != NULL){
                   
                st.push(node->left);
            } 
            if( node->right != NULL) {
                st.push(node->right);
            }           
        }
        reverse(ans.begin(), ans.end());
        return ans;
        
    }
};
