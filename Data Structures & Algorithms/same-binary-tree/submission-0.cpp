class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {

        if (p == nullptr && q == nullptr)
            return true;

        if (p == nullptr || q == nullptr)
            return false;

        queue<TreeNode*> pq;
        queue<TreeNode*> qq;

        pq.push(p);
        qq.push(q);

        while (!pq.empty() && !qq.empty()) {

            TreeNode* curr1 = pq.front();
            TreeNode* curr2 = qq.front();

            pq.pop();
            qq.pop();

            // Compare values
            if (curr1->val != curr2->val)
                return false;

            // Compare left children
            if (curr1->left == nullptr && curr2->left == nullptr) {
                // both absent -> fine
            }
            else if (curr1->left == nullptr || curr2->left == nullptr) {
                return false;
            }
            else {
                pq.push(curr1->left);
                qq.push(curr2->left);
            }

            // Compare right children
            if (curr1->right == nullptr && curr2->right == nullptr) {
                // both absent -> fine
            }
            else if (curr1->right == nullptr || curr2->right == nullptr) {
                return false;
            }
            else {
                pq.push(curr1->right);
                qq.push(curr2->right);
            }
        }

        return true;
    }
};