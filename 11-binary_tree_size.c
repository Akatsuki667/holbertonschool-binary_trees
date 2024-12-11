#include "binary_trees.h"
/**
 * binary_tree_size - Mesure la taille d'un arbre binaire
 * @tree: Pointeur noeud racine de l'arbre pour mesurer la taille
 * Return: Taille de l'arbre, ou 0 si l'arbre est NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
size_t left_size; /* stockage nb noeuds */
size_t right_size; /* stockage nb noeuds */
size_t sum; /* stockage calcul nb noeuds*/
if (tree == NULL) /* vérification paramètre valide */
return (0);
left_size = binary_tree_size(tree->left);
/* appel récursif pour obtenir noeuds */
right_size = binary_tree_size(tree->right);
/* appel récursif pour obtenir noeuds */
sum = (left_size + right_size + 1);
/* calcul nb de noueds sous-arbres + racine */
return (sum);
}
