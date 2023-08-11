
class Solution
{
private:
    pair<bool, int> check(TreeNode *root)
    {

        if (root == NULL)
        {
            pair<bool, int> p(true, 0);
            return p;
        }

        pair<bool, int> left = check(root->left);
        pair<bool, int> right = check(root->right);

        pair<bool, int> ans;
        ans.first = (abs(left.second - right.second) <= 1);
        ans.second = max(left.second, right.second) + 1;
        return ans;
    }

public:
    bool isBalanced(TreeNode *root)
    {

        pair<bool, int> ans = check(root);
        return ans.first;
    }
};