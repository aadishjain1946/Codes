#include <iostream>
using namespace std;
class binarySearchTreeNode
{
public:
    int data;
    binarySearchTreeNode *left, *right;
    binarySearchTreeNode(int data)
    {
        this->data = data;
        this->left = this->right = NULL;
    }
};
class binarySearchTree
{
private:
    binarySearchTreeNode *root;
    binarySearchTreeNode *insert(binarySearchTreeNode *root, int data)
    {
        if (root == NULL)
        {
            binarySearchTreeNode *temp = new binarySearchTreeNode(data);
            return temp;
        }
        if (root->data > data)
        {
            root->left = insert(root->left, data);
        }
        else
        {
            root->right = insert(root->right, data);
        }
        return root;
    }
    void display(binarySearchTreeNode *root)
    {
        if (root == NULL)
        {
            return;
        }
        display(root->left);
        cout << root->data << " ";
        display(root->right);
    }

public:
    binarySearchTree()
    {
        this->root = NULL;
    }
    binarySearchTree(int data)
    {
        this->root = NULL;
        this->root = this->insert(this->root, data);
    }
    void insert(int data)
    {
        this->root = this->insert(this->root, data);
    }
    void display()
    {
        cout << "Elements of Binary Search Trees: ";
        this->display(this->root);
        cout << '\n';
    }
};
int main()
{
    int choice = -1;
    binarySearchTree b1;
    while (choice != 3)
    {
        cout << "Menu\n";
        cout << "1. Insert Element.\n";
        cout << "2. Display Binary Search Tree.\n";
        cout << "3. Exit.\n";
        cout << "Enter your choice: ";
        cin >> choice;
        if (choice == 1)
        {
            int ele;
            cout << "Enter element to be inserted: ";
            cin >> ele;
            b1.insert(ele);
        }
        else if (choice == 2)
        {
            b1.display();
        }
        else if (choice == 3)
        {
            break;
        }
        else
        {
            cout << "Wrong choice!!\n";
        }
    }
    return 0;
}
