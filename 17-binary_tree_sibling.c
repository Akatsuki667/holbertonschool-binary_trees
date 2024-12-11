#include "binary_trees.h"
/**
 * binary_tree_sibling - Trouve le frère ou la sœur d'un nœud
 * @node: Pointeur vers le noeud pour trouver la fratrie
 * Return: Pointeur vers le nœud frère, ou NULL s'il n'y a pas de frère.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
if (node == NULL || node->parent == NULL)
/* vérification paramètre et parent valide */
return (NULL);
if (node->parent->left == node)
/* si noeud enfant de gauche */
return (node->parent->right);
/* sibling enfant droit */
if (node->parent->right == node)
/* si noeud enfant droit */
return (node->parent->left);
/* sibling enfant gauche */
return (NULL);
/* sécurité fonction retourne toujours valeur */
}
