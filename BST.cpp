#include <bits/stdc++.h>
using namespace sd;

// BST insert function

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
	TreeNode* insertIntoBST(TreeNode* root, int val) {
		if(root==nullptr)return nullptr;
		if(val > root->val){  // right
			if(root->right==nullptr){
				TreeNode* aNode = new TreeNode(val);
				root->right = aNode;
				return aNode;
			}
			else insertIntoBST(root->right,val);
		}
		else if(val < root->val){
			if(root->left==nullptr){
				TreeNode* aNode = new TreeNode(val);
				root->left = aNode;
				return aNode;
			}
			else insertIntoBST(root->left,val);
		}
		return root;
	}
};
