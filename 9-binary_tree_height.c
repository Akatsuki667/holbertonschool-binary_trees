#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left_height;
size_t right_height;
if (tree == NULL)
return (0);
if (tree->left == NULL && tree->right == NULL)
return (0);
left_height = binary_tree_height(tree->left);
right_height = binary_tree_height(tree->right);
if (left_height > right_height)
return (1 + left_height);
return (1 + right_height);
}
