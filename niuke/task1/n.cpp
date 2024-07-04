#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int value;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val) : value(val), left(nullptr), right(nullptr) {}
};
TreeNode* buildTree(vector<int>& postorder, int& index) {
    if (index < 0 || index >= postorder.size()) // 边界检查
        return nullptr;

    TreeNode* root = new TreeNode(postorder[index--]);

    root->left = buildTree(postorder, index);
    root->right = buildTree(postorder, index);
    return root;
}

TreeNode* build(vector<int>&postorder) {
    int l=postorder.size()-1;
    return buildTree(postorder,l);

}
void cengci(TreeNode *root) {
    if(root==NULL) return;
    queue<TreeNode*>q;
    q.push(root);
    while(!q.empty()) {
        TreeNode *cur=q.front();
        q.pop();
        cout<<cur->value<<' ';
        if(cur->left!=NULL) {
            q.push(cur->left);
        }
        if(cur->right!=NULL) {
            q.push(cur->right);
        }


    }
}
void shuchu(TreeNode *root){
    cout<<root->value<<' ';
    if(root->left!=NULL) shuchu(root->left);
    if(root->right!=NULL) shuchu(root->right);
}
int main() {
    int n;
    cin >> n;
    vector<int> postorder(n);
    for (int i = 0; i < n; ++i)
        cin >> postorder[i];
    TreeNode* root = build(postorder);
    cengci(root);
   //shuchu(root);
    return 0;
}