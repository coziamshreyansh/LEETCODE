vector<int> postorder(Node* root) {
       vector<int> result;
    if(root == NULL) return result;
        
        stack<Node*> st;
        st.push(root);
        
        while(!st.empty()) {
            Node* node = st.top();
            result.push_back(node -> val);
            st.pop();
            for(Node* children: node -> children) {
                st.push(children);
            }
        }
        
        reverse(result.begin(), result.end());
        return result;
}
