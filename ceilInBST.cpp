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
int findCeil(Node* root, int input) {
    if (root == NULL) return -1;
    vector<int>in;
    inorder(root,in);
    for(int i=0;i<in.size();i++){
        if(in[i]>=input){
            return in[i];
            break;
        }
    }
    return -1;
}