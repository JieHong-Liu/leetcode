// array is more more faster than the vector!!!
class Solution
{
public:
    bool isSymmetric(TreeNode *root)
    {
        record_left(root->left);
        record_right(root->right);

        //         for(int i = 0; i < left_size; i++)
        //         {
        //             cout << left_tree[i] << " ";
        //         }
        //         cout << endl;
        //         for(int i = 0; i < right_size; i++)
        //         {
        //             cout << right_tree[i] << " ";
        //         }

        if (left_size != right_size)
        {
            return false;
        }
        else
        {
            for (int i = 0; i < left_size; i++)
            {
                if (left_tree[i] != right_tree[i])
                {
                    return false;
                }
            }
            return true;
        }
    }

private:
    int left_tree[1000];
    int right_tree[1000];
    int left_size = 0;
    int right_size = 0;
    // vector<int> left_tree;
    // vector<int> right_tree;
    void record_left(TreeNode *root)
    {
        if (!root)
        {
            left_tree[left_size] = -1;
            left_size++;
            return;
        }
        left_tree[left_size] = (root->val);
        left_size++;
        record_left(root->left);
        record_left(root->right);
    }
    void record_right(TreeNode *root)
    {
        if (!root)
        {
            right_tree[right_size] = -1;
            right_size++;
            return;
        }
        // cout << root->val << endl;
        right_tree[right_size] = (root->val);
        right_size++;
        record_right(root->right);
        record_right(root->left);
    }
};