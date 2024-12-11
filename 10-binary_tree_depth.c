#include "binary_trees.h"
/**
 * binary_tree_depth - Mesure la profondeur noeud dans un arbre binaire
 * @tree: Pointeur vers le noeud pour mesurer la profondeur
 * Return: Profondeur du noeud, ou 0 si l'arbre est NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
if (tree == NULL) /* vérification paramètre valide */
return (0);
if (tree->parent == NULL)
/* vérification noeud courant racine de l'arbre */
return (0);
return (1 + binary_tree_depth(tree->parent));
/* calcul récursif profondeur */
/* parcours chaîne parents jusqu'à atteindre racine */
}
