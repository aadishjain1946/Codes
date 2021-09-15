class Node:
    def __init__(self, ele):
        self.ele = ele
        self.left = None
        self.right = None


def inOrder(root):
    if root == None:
        return
    inOrder(root.left)
    print(root.ele, end=" ")
    inOrder(root.right)


#      2
#     / \
#    1   3

root = Node(2)
root.left = Node(1)
root.right = Node(3)
inOrder(root)
