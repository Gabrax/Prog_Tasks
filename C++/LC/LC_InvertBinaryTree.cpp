#include <iostream>


struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

TreeNode* invertTree(TreeNode* root) {

            std::ios::sync_with_stdio(0);
            std::cin.tie(0);
            
            if(root == NULL) return NULL;
            invertTree(root->left);
            invertTree(root->right);

            TreeNode* temp = root->left;
            root->left = root->right;
            root->right = temp;
            
            return root;
    }

int main(){

    return 0;
}