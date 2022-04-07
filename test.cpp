#include <iostream>
#include <algorithm>
using namespace std;
class tree
{
public:
    int data;
    tree *left, *right;
};
class BinaryTreeUtils
{
public:
    int size(tree *root)
    {
        if (root == NULL)
        {
            return 0;
        }
        return size(root->left) + size(root->right) + 1;
    }
    int size(tree *root)
    {
        if (root == NULL)
        {
            return 0;
        }
        return max(size(root->left), size(root->right)) + 1;
    }
};
