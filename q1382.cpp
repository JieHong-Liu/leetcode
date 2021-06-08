class Solution
{
public:
    TreeNode *balanceBST(TreeNode *root)
    {
        vector<int> array;
        BinaryTraverseInorder(root, array);
        for (int i = 0; i < array.size(); i++)
        {
            cout << array[i] << "\t";
        }
        return NULL;
    }

private:
    void BinaryTraverseInorder(TreeNode *root, vector<int> &array)
    {
        if (root)
        {
            BinaryTraverseInorder(root->left, array);
            array.push_back(root->val);
            BinaryTraverseInorder(root->right, array);
        }
    }

    void construct_BST(); // use binary search way to construct a tree. Return the root of the tree.
};
