struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr){} * TreeNode(int x) : val(x), left(nullptr), right(nullptr){} * TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    TreeNode *searchBST(TreeNode *root, int val)
    {
        TreeNode *currentNode = root;
        while (currentNode)
        {
            // cout << currentNode->val << endl;
            if (currentNode->val > val)
            {
                currentNode = currentNode->left;
            }
            else if (currentNode->val < val)
            {

                currentNode = currentNode->right;
            }
            else
            {
                return currentNode;
            }
        }
        return NULL; // return NULL can be faster than return currentNode( same as NULL)
    }
};