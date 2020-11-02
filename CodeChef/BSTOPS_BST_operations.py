#https://www.codechef.com/problems/BSTOPS
# cook your dish here
class Node():
    def __init__(self,val,pos):
        self.val=val 
        self.pos=pos 
        self.left=None 
        self.right=None 
def get_min(node):
    while node.left:
        node=get_min(node.left)
    return node 
def insert(parent,val,pos):
    if parent is None:
        parent=Node(val,pos)
        print(pos)
        return parent 
    elif val<parent.val:
        parent.left=insert(parent.left,val,2*pos)
    else:
        parent.right=insert(parent.right, val, 2*pos + 1)
    return parent
def delete(parent,val,print_pos):
    if parent is None:
        return parent 
    if parent.val>val:
        parent.left=delete(parent.left,val,print_pos)
    elif parent.val<val:
        parent.right=delete(parent.right,val,print_pos)
    else:
        if print_pos:
            print(parent.pos)
        if parent.left is not None and parent.right is not None:
            min_val = get_min(parent.right)
            parent.val = min_val.val
            parent.right = delete(parent.right, min_val.val, False)
        elif parent.left is None:
            parent = parent.right
        elif parent.right is None:
            parent = parent.left
    return parent
root=None
q=int(input())
for _ in range(q):
    i,n=input().split()
    if i=='i':
        root = insert(root,int(n), 1)
    else:
        root = delete(root,int(n), True)

'''

'''