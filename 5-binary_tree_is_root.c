#include "binary_trees.h"
/**
 * binary_tree_is_root - Vérifie si un nœud est la racine
 * @node: Pointeur vers le nœud à vérifier
 *
 * Return: 1 si le nœud est une racine, sinon 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
if (node == NULL) /* vérification paramètre valide */
return (0);
if (node->parent == NULL) /* vérification node est la racine */
return (1);
return (0);
}
