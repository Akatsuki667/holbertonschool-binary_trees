#include "binary_trees.h"

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *new_child; /* création noeud */
new_child = malloc(sizeof(binary_tree_t)); /* allocation mémoire noeud */
if (new_child == NULL) /* vérification allocation */
return (NULL);
new_child->n = value; /* assignation champ n avec paramètre */
new_child->parent = parent; /* assignation champ parent à paramètres */
new_child->left = parent->left;
/* assignation noued enfant à noeud gauche parent */
if (parent->left != NULL)
parent->left->parent = new_child;
parent->left = new_child;
return (new_child);
}

