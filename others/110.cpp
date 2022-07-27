class Solution
{
public:
    bool isBalanced(TreeNode *root)
    {
        if (!root)
            return true;
        calculate_depth(root);
        if (non_balanced)
        {
            return false;
        }
        else
        {
            return true;
        }
    }

private:
    bool non_balanced;
    int calculate_depth(TreeNode *root)
    {
        if (!root)
            return 0;
        int l = calculate_depth(root->left);
        int r = calculate_depth(root->right);
        if (abs(l - r) > 1)
        // since if there is any subtree non balanced, it should be record, and no more do again.
        {
            non_balanced = true;
            return 0;
        }
        return 1 + max(l, r);
    }
};