# C-Binary Trees

## TASKS
Here is the tasks of this project.

### 0-binary_tree_node.c
Write a function that creates a binary tree node.
- When created, a node does not have any child.
- Your function must return a pointer to the new node, or NULL on failure

### 1-binary_tree_insert_left.c
Write a function that inserts a node as the left-child of another node
- Your function must return a pointer to the created node, or NULL on failure or if parent is NULL
- If parent already has a left-child, the new node must take its place, and the old left-child must be set as the left-child of the new node.

### 2-binary_tree_insert_right.c
Write a function that inserts a node as the right-child of another node
- Your function must return a pointer to the created node, or NULL on failure or if parent is NULL
- If parent already has a right-child, the new node must take its place, and the old right-child must be set as the right-child of the new node.

### 3-binary_tree_delete.c
Write a function that deletes an entire binary tree.
- If tree is NULL, do nothing.

### 4-binary_tree_is_leaf.c
Write a function that checks if a node is a leaf
- Your function must return 1 if node is a leaf, otherwise 0
- If node is NULL, return 0

### 5-binary_tree_is_root.c
Write a function that checks if a given node is a root
- Your function must return 1 if node is a root, otherwise 0
- If node is NULL, return 0

### 6-binary_tree_preorder.c
Write a function that goes through a binary tree using pre-order traversal
- If tree or func is NULL, do nothing

### 7-binary_tree_inorder.c
Write a function that goes through a binary tree using in-order traversal
- If tree or func is NULL, do nothing.

### 8-binary_tree_postorder.c
Write a function that goes through a binary tree using post-order traversal
- If tree or func is NULL, do nothing.

### 9-binary_tree_height.c
Write a function that measures the height of a binary tree
- If tree is NULL, your function must return 0

