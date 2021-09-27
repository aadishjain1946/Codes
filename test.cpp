#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *left, *right;
    node(int data)
    {
        this->data = data;
        this->left = this->right = NULL;
    }
};

void inorderTraversal(node *root)
{
    if (root != NULL)
    {
        inorderTraversal(root->left);
        cout << root->data << " ";
        inorderTraversal(root->right);
    }
}
node *insertNode(node *root, int data)
{
    if (root == NULL)
    {
        node *sudo = new node(data);
        return sudo;
    }
    if (data < root->data)
    {
        root->left = insertNode(root->left, data);
    }
    else
    {
        root->right = insertNode(root->right, data);
    }
    return root;
}
node *minNode(node *root)
{
    node *curr = root;
    while (curr && curr->left != NULL)
    {
        curr = curr->left;
    }

    return curr;
}
node *deleteN(node *root, int data)
{
    if (root == NULL)
    {
        return root;
    }
    if (data < root->data)
    {
        root->left = deleteN(root->left, data);
    }
    else if (data > root->data)
    {
        root->right = deleteN(root->right, data);
    }
    else
    {
        if (root->left == NULL and root->right == NULL)
        {
            return NULL;
        }
        else if (root->left == NULL)
        {
            node *sudo = root->right;
            free(root);
            return sudo;
        }
        else if (root->right == NULL)
        {
            node *sudo = root->left;
            free(root);
            return sudo;
        }
        node *sudo = minNode(root->right);
        root->data = sudo->data;
        root->right = deleteN(root->right, sudo->data);
    }
    return root;
}

int main()
{
    node *root = NULL;
    root = insertNode(root, 40);
    root = insertNode(root, 60);
    root = insertNode(root, 20);
    root = insertNode(root, 80);
    root = insertNode(root, 50);
    root = insertNode(root, 10);
    root = insertNode(root, 30);
    root = insertNode(root, 15);
    root = insertNode(root, 5);
    root = insertNode(root, 35);
    root = insertNode(root, 25);
    root = insertNode(root, 45);
    root = insertNode(root, 55);
    root = insertNode(root, 70);
    root = insertNode(root, 90);
    root = insertNode(root, 32);
    root = insertNode(root, 33);
    root = insertNode(root, 48);
    root = insertNode(root, 46);
    cout << "Inorder traversal: ";
    inorderTraversal(root);
    root = deleteN(root, 40);
    cout << "\nInorder traversal: ";
    inorderTraversal(root);
    root = deleteN(root, 20);
    cout << "\nInorder traversal: ";
    inorderTraversal(root);
    return 0;
}
