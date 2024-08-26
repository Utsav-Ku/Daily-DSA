 void postOrder(Node* root,vector<int>&res){
        if(root==NULL){
            return;
        }
        for(Node* child: root->children){
            postOrder(child,res);
        }
        res.push_back(root->val);
    }
    vector<int> postorder(Node* root) {
        vector<int>res;
        postOrder(root,res);
        return res;
    }