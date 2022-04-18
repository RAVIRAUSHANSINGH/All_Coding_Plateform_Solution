class Solution {
  
    vector<int> result;
    void getio(TreeNode *root){
        if(root==nullptr) return;
        getio(root->left);
        result.push_back(root->val);
        getio(root->right);
    }
public:
    int kthSmallest(TreeNode* root, int k) {
        getio(root);
        return result[k-1];
    }
};
