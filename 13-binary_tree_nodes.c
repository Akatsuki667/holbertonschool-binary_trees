#include "binary_trees.h"
/**
 * binary_tree_nodes - Compte nœuds ayant au moins 1 enfant
 * @tree: Pointeur vers le noeud racine de l'arbre pour compter les noeuds
 * Return: Nombre noeuds ayant au moins 1 enfant, ou 0 si NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
if (tree == NULL) /* vérification paramètre valide */
return (0);
if (tree->left == NULL && tree->right == NULL)
/* vérification noeud courant est une feuille */
return (0);
return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
/* appel récursif calcul nb de noeuds*/
}
