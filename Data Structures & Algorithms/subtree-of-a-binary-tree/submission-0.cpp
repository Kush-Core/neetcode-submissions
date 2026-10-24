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

    bool sameTree(TreeNode* a, TreeNode* b) {
        // Both empty -> same
        if (a == nullptr && b == nullptr)
            return true;

        // One empty, one not -> different
        if (a == nullptr || b == nullptr)
            return false;

        // Values different -> different
        if (a->val != b->val)
            return false;

        // Both left and right subtrees must match
        return sameTree(a->left, b->left) &&
               sameTree(a->right, b->right);
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {

        // If subRoot is empty, it's always a subtree
        if (subRoot == nullptr)
            return true;

        // If root is empty but subRoot isn't
        if (root == nullptr)
            return false;

        // Try matching subRoot starting from this node
        if (sameTree(root, subRoot))
            return true;

        // Otherwise search in left and right subtrees
        return isSubtree(root->left, subRoot) ||
               isSubtree(root->right, subRoot);
    }
};
