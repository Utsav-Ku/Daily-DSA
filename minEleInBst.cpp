#include<bits/stdc++.h>
using namespace std;
 
void inorder(Node* root,vector<int>&in){
        if(!root){
            return;
        }
        inorder(root->left,in);
        in.push_back(root->data);
        inorder(root->right,in);
}
int minValue(Node* root) {
        // Code here
        if(!root) return -1;
        vector<int>in;
        inorder(root,in);
        return in[0];
}
