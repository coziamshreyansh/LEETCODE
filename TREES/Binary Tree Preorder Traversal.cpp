class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        stack<TreeNode*> s;
        if(!root)
            return ans;
        TreeNode* temp = root;
        s.push(temp);
        while(!s.empty())
        {
            temp = s.top();
            ans.push_back(temp->val);
            s.pop();
            vector<int> 
        }
        return ans;
    }
};
