#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left_height;
size_t right_height;
if (tree == NULL)
return (0);
if (tree->left == NULL && tree->right == NULL)
return (0);
switch (
