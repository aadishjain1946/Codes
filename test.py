def countNodes(root):
    if (root == None):
        return 0
    return 1 + countNodes(root.left) + countNodes(root.right)
