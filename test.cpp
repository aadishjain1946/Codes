#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    struct Node *left, *mid, *right;
    Node(int data)
    {
        this->data = data;
        this->left = this->mid = this->right = NULL;
    }
};
void insert(struct Node **root, int data)
{

    if (!(*root))
    {
        *root = new Node(data);
        return;
    }

    if ((data) < (*root)->data)
        insert(&((*root)->left), data);

    else if ((data) > (*root)->data)
        insert(&((*root)->right), data);

    else
    {
        insert(&((*root)->mid), data);
    }
}

void traverse(struct Node *root)
{
    if (root)
    {

        traverse(root->left);
        cout << root->data << " ";
        traverse(root->mid);
        traverse(root->right);
    }
}

int main()
{
    Node *root = NULL;

    insert(&root, 1);
    insert(&root, 2);
    insert(&root, 1);
    insert(&root, 3);
    insert(&root, 4);

    cout << "Traversal of ternary tree\n";
    traverse(root);

    return 0;
}
