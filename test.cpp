#include <iostream>
using namespace std;
//node class to store node data of BST
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
//function to insert data into BST
node *insert(node *head, int data)
{
    if (head == NULL)
    {
        node *newnode = new node(data);
        return newnode;
    }
    if (head->data > data)
    {
        head->left = insert(head->left, data);
    }
    else
    {
        head->right = insert(head->right, data);
    }
    return head;
}
//funtion to print BST nodes in inorder
void inorder(node *head)
{
    if (head == NULL)
    {
        return;
    }
    inorder(head->left);
    cout << head->data << " ";
    inorder(head->right);
}
//function to delete node form BST
node *deleteBST(node *root, int data)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (data > root->data)
    {
        root->right = deleteBST(root->right, data);
        return root;
    }
    else if (data < root->data)
    {
        root->left = deleteBST(root->left, data);
        return root;
    }
    else
    {
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }
        else if (root->left == NULL)
        {
            node *tempNode = root->right;
            root->right = NULL;
            delete root;
            return tempNode;
        }
        else if (root->right == NULL)
        {
            node *tempNode = root->left;
            root->left = NULL;
            delete root;
            return tempNode;
        }
        else
        {
            node *tempNode = root->right;
            while (tempNode->left != NULL)
            {
                tempNode = tempNode->left;
            }
            int minimumData = tempNode->data;
            root->data = minimumData;
            root->right = deleteBST(root->right, minimumData);
            return root;
        }
    }
}
int main()
{
    //creating BST
    node *n1 = new node(33);
    node *n2 = new node(23);
    node *n3 = new node(24);
    node *n4 = new node(12);
    node *n5 = new node(14);
    node *n6 = new node(10);
    node *n7 = new node(15);
    node *n8 = new node(17);
    node *n9 = new node(18);
    node *n10 = new node(12);
    node *n11 = new node(7);
    node *n12 = new node(8);
    node *n13 = new node(1);
    node *n14 = new node(6);
    node *n15 = new node(2);
    n1->left = n2;
    n2->left = n4;
    n2->right = n3;
    n4->left = n6;
    n4->right = n5;
    n6->left = n11;
    n11->left = n13;
    n11->right = n12;
    n13->right = n14;
    n14->left = n15;
    n5->left = n10;
    n5->right = n7;
    n7->right = n8;
    n8->right = n9;

    //INSERTING 9, 16 inrot tree
    cout << "Inserting 9 in BST\n";
    n1 = insert(n1, 9);
    cout << "Inserting 16 in BST\n";
    n1 = insert(n1, 16);

    cout << "\nPrinting Tree Data: ";
    inorder(n1);

    //Deleting 2,17,6 from BST
    cout << "\n\nDeleting 2 from BST\n";
    n1 = deleteBST(n1, 2);
    cout << "Deleting 17 from BST\n";
    n1 = deleteBST(n1, 17);
    cout << "Deleting 6 from BST\n";
    n1 = deleteBST(n1, 6);

    cout << "\nPrinting Tree Data: ";
    inorder(n1);
}