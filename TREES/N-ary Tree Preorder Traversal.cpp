class Solution {
public:
    vector<int> preorder(Node* root) {
        vector<int> ans;
        if(root) {
            
            stack<Node*> st;
        
            st.push(root);
        
            while(!st.empty()) {
                ans.push_back(st.top() -> val);
                Node *temp = st.top();
                st.pop();
                if((temp -> children).size()) {
                    auto it = (temp -> children).rbegin();
                    while (it != (temp -> children).rend()) {
                        st.push(*it);
                        it++;
                    };
                }
        }
        
    }
          return ans;
    }
};
