
#include <iostream>
using namespace std;

class Node
{
    int data;
    Node *left, *right;

public:
    Node() : data(0), left(NULL), right(NULL) {}

    Node(int value)
    {
        data = value;
        left = right = NULL;
    }

    void printTree(Node *root)
    {
        if (!root)
        {
            return;
        }
        printTree(root->left);
        cout << root->data << endl;
        printTree(root->right);
    }
    Node *Insert(Node *root, int value)
    {
        if (!root)
        {
            return new Node(value);
        }
        if (value > root->data)
        {
            root->right = Insert(root->right, value);
        }
        else
        {
            root->left = Insert(root->left, value);
        }
        return root;
    }
    Node *deleteNode(Node *root, int k)
    {
        if (root == NULL)
        {
            return root;
        }

        if (root->data > k)
        {
            root->left = deleteNode(root->left, k);
            return root;
        }
        else if (root->data < k)
        {
            root->right = deleteNode(root->right, k);
            return root;
        }

        if (root->left == NULL)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == NULL)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }

        else
        {

            Node *sudo = root;

            Node *temp = root->right;
            while (temp->left != NULL)
            {
                sudo = temp;
                temp = temp->left;
            }

            if (sudo != root)
                sudo->left = temp->right;
            else
                sudo->right = temp->right;

            root->data = temp->data;

            delete temp;
            return root;
        }
    }
};
Node b, *root = NULL;
void INSERT(int n)
{
    root = b.Insert(root, n);
}
void DELETE(int n)
{
    root = b.deleteNode(root, n);
}
int main()
{
    INSERT(23);INSERT(18);INSERT(35);
    INSERT(73);INSERT(51);INSERT(31);
    INSERT(20);INSERT(32);INSERT(81);
    DELETE(23);INSERT(19);DELETE(35);
    DELETE(73);INSERT(63);DELETE(31);
    INSERT(71);INSERT(37);DELETE(18);
    b.printTree(root);
    return 0;
}
