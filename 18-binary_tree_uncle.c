#include "binary_trees.h"
/**
 * binary_tree_uncle - Trouver l'oncle d'un nœud
 * @node: Pointeur noeud pour trouver l'oncle
 * Return: Pointeur noeud oncle, ou NULL s'il n'y a pas d'oncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
binary_tree_t *grandparent;
if (node == NULL || node->parent == NULL)
/* vérification noeud ou parent valide */
return (NULL);
grandparent = node->parent->parent;
/* récupération grandparent */
if (grandparent == NULL)
/* vérification grandparent valide */
return (NULL);
if (grandparent->left == node->parent) /* trouver l'oncle */
/* si parent est le fils gauche grandparent */
return (grandparent->right);
/* retourne fils droit du grandparent */
if (grandparent->right == node->parent)
/* si parent est le fils droit grandparent */
return (grandparent->left);
/* retourne fils gauche du grandparent */
return (NULL);
}
